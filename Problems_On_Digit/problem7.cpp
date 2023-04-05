// Write a program which accept number from user and return the count of Odd digits.
// input : 2395       1018        8462        
// output : 3         2           0  

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

        int CountOddDigit()
        {
            int iDigit = 0;
            int iCnt = 0;

            if(No < 0)
            {
                No = -No;
            }

            while(No > 0)
            {
                iDigit = No % 10;
                if(iDigit % 2 != 0)
                {
                    iCnt++;
                }
                No = No / 10;
            }
            return iCnt;
        }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : "<<"\n";
    cin>>iValue;

    Digits obj(iValue);

    iRet = obj.CountOddDigit();
    cout<<"number of Odd digits are : "<<iRet<<"\n";
    
    return 0;
}