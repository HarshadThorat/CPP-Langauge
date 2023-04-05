//write a program which accept N from user and display all such elements which are divisible by 5 & 3?
// input  :  N = 6
//           Elements  = 85 66 3 15 93 88
// output :  15              


#include<iostream>
using namespace std;

class ArrayX
{
    public:
        void DivBy5And3(int Arr[], int Size)
        {
            int iCnt = 0;
            
            cout<<"Elements Divisible by 5 & 3\n";
            for(iCnt = 0; iCnt < Size; iCnt++)
            {
                if((Arr[iCnt] % 5 == 0) && (Arr[iCnt] % 3 == 0))
                {
                    cout<<Arr[iCnt]<<"\t";
                }
            }
            
        }
};

int main()
{
    int iRet = 0;
    int size = 0;
    int iCnt = 0;
    int *Arr = NULL;

    cout<<"Enter the size of array\n";
    cin>>size;

    Arr = new int[size];

    cout<<"Enter the elements : "<<"\n";
    
    for(iCnt = 0; iCnt < size; iCnt++)
    {
        cin>>Arr[iCnt];
    }

    ArrayX obj;

    obj.DivBy5And3(Arr,size);
    
    return 0;
}