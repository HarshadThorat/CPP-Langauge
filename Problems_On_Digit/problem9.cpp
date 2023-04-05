// Write a program which accept number from user and return the Multiplication of all digits.
// input : 2395       1018        9440        
// output : 270         8         144

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

        int MultDigit()
        {
            int iDigit = 0;
            int iCnt = 0;
            int iMult = 1;

            if(No < 0)
            {
                No = -No;
            }

            while(No > 0)
            {
                iDigit = No % 10;
                if(iDigit == 0)
                {
                    iDigit = 1;
                }
                iMult = iMult * iDigit;
                No = No / 10;
            }
            return iMult;
        }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : "<<"\n";
    cin>>iValue;

    Marvellous *obj = new Marvellous(iValue);

    iRet = obj->MultDigit();
    cout<<"Multiplication of digits are : "<<iRet<<"\n";
    
    delete obj;

    return 0;
}