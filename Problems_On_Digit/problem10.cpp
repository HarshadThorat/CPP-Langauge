// Write a program which accept number from user and return difference between summation of even digits and summation of odd digits.
// input : 2395                 1018              8440        
// output : -15 (2 - 17)         6   (8-2)        16  (16-0) 

#include<iostream>
using namespace std;

class Digits
{
    public:
        int No;

        Digits(int A)
        {
            No = A;
        }
};

class Marvellous : public Digits
{
    public:
        Marvellous(int A) : Digits(A)
        {}

        int Difference()
        {
            int iDigit = 0;
            int iEvenCnt = 0;
            int iOddCnt = 0;

            if(No < 0)
            {
                No = -No;
            }

            while(No > 0)
            {
                iDigit = No % 10;
                if(iDigit % 2 == 0)
                {
                    iEvenCnt = iEvenCnt + iDigit;
                }
                else
                {
                    iOddCnt = iOddCnt + iDigit;
                }
                No = No / 10;
            }
            return iEvenCnt - iOddCnt;
        }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : "<<"\n";
    cin>>iValue;

    Marvellous *obj = new Marvellous(iValue);

    iRet = obj->Difference();
    cout<<"Difference of Even and Odd Digits are : "<<iRet<<"\n";
    
    delete obj;

    return 0;
}