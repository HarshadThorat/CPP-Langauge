//write  program which accept  arrays  from user and Display below pattern
//Input :  8   9  7  6  4   2   4
//Outut :  * * * * * * * *
//         * * * * * * * * *
//         * * * * * * *         
//         * * * * * *
//         * * * *
//         * *  
//         * * * * 

               
#include<iostream>
using namespace std;


class Number
{
    public:
        void Display(int Arr[], int size)
        {
            int iCnt = 0;
            int j = 0;

            for(iCnt = 0; iCnt < size; iCnt++)
            {
                for(j = 0; j < Arr[iCnt]; j++)
                {
                    cout<<"*\t";
                }
                cout<<"\n";
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

    obj.Display(Arr,value1);
 
    return 0;
}