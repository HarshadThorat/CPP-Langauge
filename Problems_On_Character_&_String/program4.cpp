//Accept character from user and check whether it is Small case or not(a-z)
// input :   d            D
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

        bool ChkSmall()
        {
            if((ch >= 'a') && (ch <= 'z'))
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

    bRet = obj.ChkSmall();
    if(bRet == true)
    {
        cout<<"It is Small character"<<"\n";
    }
    else
    {
        cout<<"It is not a Small character"<<"\n";
    }

}