// Write a program which accept number from user and count frequency of 2 int it.
// input : 2395        1018            9000               922432
// output : 1          0               0                  3


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

        int CountTwo()
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
                if(iDigit == 2)
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

    Digits *obj = new Digits(iValue);

    iRet = obj->CountTwo();
    cout<<"Frequency of 2 is : "<<iRet<<"\n";

    delete obj;
    
    return 0;
}