//Accept character from user and check whether it is alphabate or not(A-Z a-z)
// input : F           &
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

        bool ChkAlpha()
        {
            if(((ch >= 'a') && (ch <= 'z'))  || ((ch >= 'A') && (ch <= 'Z')))
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

    bRet = obj.ChkAlpha();
    if(bRet == true)
    {
        cout<<"It is Alphabate"<<"\n";
    }
    else
    {
        cout<<"It is not a Alphabate"<<"\n";
    }

}