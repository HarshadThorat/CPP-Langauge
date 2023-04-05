//Accept character from user and check whether it is Digit or not(0-9)
// input :   7            d
// output : true        false 

#include<iostream>
using namespace std;

class Alphabate
{
    public:
        char ch;

        Alphabate(char A)
        {
            ch = A;
        }

        bool ChkDigit()
        {
            if((ch >= '0') && (ch <= '9'))
            {
                return true;
            }
            else
            {   
                return false;
            }
        }
};

int main()
{
    char cValue = '0';
    char bRet = false; 

    cout<<"Enter the Character"<<"\n";
    cin>>cValue;

    Alphabate obj(cValue);

    bRet = obj.ChkDigit();
    if(bRet == true)
    {
        cout<<"It is Digit"<<"\n";
    }
    else
    {
        cout<<"It is not a Digit"<<"\n";
    }

}