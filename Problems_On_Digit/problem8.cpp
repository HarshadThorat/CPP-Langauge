// Write a program which accept number from user and return the count of digits in between 3 and 7.
// input : 2395       1018        4521        
// output : 1         0           2 

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

        int CountRange()
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
                if((iDigit > 3) && (iDigit < 7)) 
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

    iRet = obj->CountRange();
    cout<<"number of Odd digits are : "<<iRet<<"\n";
    
    delete obj;
    return 0;
}