//Accept character from user and check whether it is Capital or not(A-Z)
// input : F             f
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

        bool ChkCapital()
        {
            if((ch >= 'A') && (ch <= 'Z'))
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

    bRet = obj.ChkCapital();
    if(bRet == true)
    {
        cout<<"It is Capital character"<<"\n";
    }
    else
    {
        cout<<"It is not a Capital character"<<"\n";
    }

}