//write java program which accept  arrays from user Replace each member with summation of its digit 
//Input :  89  687  56  549   87   9
//Outut :  17   21  11   18   15    9
//          

               
#include<iostream>
using namespace std;


class Number
{
    public:
        void Summation(int Arr[], int size)
        {
            int iCnt = 0;
            int Sum = 0;
            int iDigit = 0;

            cout<<"Addition of array digit is : \n"; 
            for(iCnt = 0; iCnt < size; iCnt++)
            {
                while(Arr[iCnt] != 0)
                {
                    iDigit = Arr[iCnt] % 10;
                    Sum = Sum + iDigit;
                    Arr[iCnt]  = Arr[iCnt] / 10;
                }
                cout<<Sum<<"\t";
                Sum = 0;
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

    obj.Summation(Arr,value1);
 
    return 0;
}