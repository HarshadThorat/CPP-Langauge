//write a program which accept N from user and display all such elements which are Multiples of 11?
// input  :  N = 6
//           Elements  = 85 66 55 15 93 88
// output :  66 55 88              


#include<iostream>
using namespace std;

class ArrayX
{
    public:
        void MultipleOf11(int Arr[], int Size)
        {
            int iCnt = 0;
            
            cout<<"Elements are Multiple of 11\n";
            for(iCnt = 0; iCnt < Size; iCnt++)
            {
                if(Arr[iCnt] % 11 == 0)
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

    obj.MultipleOf11(Arr,size);
    
    return 0;
}