// Accept N number from user and accept range, Display all elements from that range.
//input   N :  6
//        Start : 60
//        End   : 90
//        eletments : 85 66 3 76 93 88
// output :  66  76  88 

#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;
        int iStart;
        int iEnd;

        ArrayX(int i, int j, int k)
        {
            iSize = i;
            iStart = j;
            iEnd = k;
            Arr = new int[iSize];
        }
        ~ArrayX()
        {
            delete []Arr;
        }
        void Accept()
        {
            cout<<"Enter the elements : "<<"\n";
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void DisplayRange()
        {
            int iCnt = 0;
            
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if((Arr[iCnt] >= iStart)  && (Arr[iCnt] <= iEnd)) 
                {
                    cout<<Arr[iCnt]<<"\t";
                }
            }

        }    
};

int main()
{
    int iLength = 0;
    int iValue1 = 0;
    int iValue2 = 0;

    cout<<"Enter the number of elements you want : "<<"\n";
    cin>>iLength;

    cout<<"Enter start point"<<"\n";
    cin>>iValue1;

    cout<<"Enter End point"<<"\n";
    cin>>iValue2;

    ArrayX obj(iLength, iValue1, iValue2);

    obj.Accept();

    obj.DisplayRange();
 
    return 0;
}