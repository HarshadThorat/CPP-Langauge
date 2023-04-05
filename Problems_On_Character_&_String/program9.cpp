//Accept character from user and check whether it is Special symbol or not(A-Z)
// input :   %            d
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

        bool ChkSymbol()
        {
            if((ch >= '!') && (ch <= '*'))
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
    bool bRet = false;

    cout<<"Enter the Character"<<"\n";
    cin>>cValue;

    Alphabate *obj = new Alphabate(cValue);

    bRet = obj->ChkSymbol();
    if(bRet == true)
    {
        cout<<"It is Special Symbol"<<"\n";
    }
    else
    {
        cout<<"It is not a Special Symbol"<<"\n";
    }
    
    delete obj;

    return 0;
    
}