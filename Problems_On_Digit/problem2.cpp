// Write a program which accept number from user and check whether it contain 0 in it or not.
// input : 2395                       1018
// output : There is no zero         There is zero

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

        bool ChkZero()
        {
            int iDigit = 0;
          
            while(No != 0)
            {
                iDigit = No % 10;
                if(iDigit < 1)
                {
                    return true;
                }
                No = No / 10;
            }  
        }
};

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter the number : "<<"\n";
    cin>>iValue;

    Digits *obj = new Digits(iValue);

    bRet = obj->ChkZero();
    if(bRet == true)
    {
        cout<<"There is Zero"<<"\n";
    }
    else
    {
        cout<<"There is No Zero"<<"\n";
    }

    delete obj;
    
    return 0;
}