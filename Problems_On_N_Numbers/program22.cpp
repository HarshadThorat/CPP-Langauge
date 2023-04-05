//write a program which accept N from user and return difference between summation of Even elements and summation of Odd elements
// input  :  N = 6
//           Elements  = 85 66 3 80 93 88
// output :  53 (234-181)              


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
            int iCnt = 0;
            int iEvenSum = 0;
            int iOddSum = 0;
            
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] % 2 == 0)
                {
                    iEvenSum = iEvenSum + Arr[iCnt];
                }
                else
                {
                    iOddSum = iOddSum + Arr[iCnt];
                }
            }
            return (iEvenSum - iOddSum);
        }
  
};

int main()
{
    int iRet = 0;
    int size = 0;

    cout<<"Enter the size of array\n";
    cin>>size;

    ArrayX obj(size);

    obj.Accept();

    iRet = obj.Difference();
    cout<<"Difference is : "<<iRet;

    return 0;
}