// Accept N number from user and return the product of all Odd elements.
//input   N :  6
//        eletments : 15 66 3 70 10 88
// output :  45 


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

        int ProductOfOddN()
        {
            int iCnt = 0;
            int iMult = 1;
            
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] % 2 != 0)
                {
                    iMult = iMult * Arr[iCnt];
                }
            }
            return iMult;
        }    
};

int main()
{
    int iRet = 0;

    ArrayX obj(6);

    obj.Accept();

    iRet = obj.ProductOfOddN();
    cout<<"multiplication of all odd  elements are : "<<iRet;

    return 0;
}