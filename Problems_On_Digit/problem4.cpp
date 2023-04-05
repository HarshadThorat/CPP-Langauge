// Write a program which accept number from user and count frequency of 4 int it.
// input : 2395        1018            9440               922432
// output : 1          0               2                  1

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

        int CountFour()
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
                if(iDigit == 4)
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

    iRet = obj.CountFour();
    cout<<"Frequency of 4 is : "<<iRet<<"\n";
    
    return 0;
}