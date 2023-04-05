// Accept N numbers from user and return difference between summation of even and summation of odd elements. 
// input : N:    6
// Elements : 85   66 3  80  93  88
// output : 53  (234-181)

#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int i)
        {
            iSize = i;
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

        int Difference()
        {
            int iCnt = 0, iSumEven = 0, iSumOdd = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] % 2 == 0)
                {
                    iSumEven = iSumEven + Arr[iCnt];
                }
                else
                {
                    iSumOdd = iSumOdd + Arr[iCnt];
                }
            }
            return iSumEven - iSumOdd;
        }
};

int main()
{
    int iLength = 0;
    int iRet = 0;

    cout<<"Enter the number of array you want : "<<"\n";
    cin>>iLength;

    ArrayX obj(iLength);

    obj.Accept();

    iRet = obj.Difference();
    cout<<"Difference is : "<<iRet;
    
    return 0;
}