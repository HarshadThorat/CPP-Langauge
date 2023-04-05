//write java program which accept  arrays from user and Reverse each number of that array 
//Input : 12  57  28  3 
//        

//Outut :  3 28 57 12 
//          
    

               
#include<iostream>
using namespace std;


class Number
{
    public:
        void Reverse(int Arr[], int size)
        {
            int start = 0;
            int end = size-1;
            int temp = 0;

            while(start < end)
            {
                temp = Arr[start];
                Arr[start] = Arr[end];
                Arr[end] = temp;

                start++;
                end--;
            }
            
            cout<<"Array after the Reverse operation : \n"; 
            for(int iCnt = 0; iCnt < size; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
        }  
};


int main()
{
    int value1 = 0;
    int *Arr = NULL;
    int i = 0;
    
    cout<<"Enter the size of first array\n";
    cin>>value1;

    Arr = new int[value1];
    
    cout<<"Enter the elements\n";
    for(i = 0; i < value1; i++)
    {
        cin>>Arr[i];
    }

    Number obj;

    obj.Reverse(Arr,value1);
 
    return 0;
}