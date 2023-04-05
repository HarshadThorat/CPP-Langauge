// Write a program which accept number from user and count frequency of such a digit which are less than 6.
// input : 2395        1018            9440               96672
// output : 3          3               3                  1

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

        int LessThanSix()
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
                if(iDigit < 6)
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

    iRet = obj.LessThanSix();
    cout<<"number is less than six  are : "<<iRet<<"\n";
    
    return 0;
}