// write a program which accept string from user and accept one character. check whether is present in string or not.
// input : Marvellous
// output : (e)  true

#include<iostream>
using namespace std;


class String
{
    public:
        bool ChkChar(char *str , char ch)
        {
            
            while(*str  != '\0')
            {
                if(*str == ch)
                {
                    return true;
                }
                str++;
            }
        }
};

int main()
{
    char Arr[20];
    char cValue = 0;

    cout<<"Enter the string\n";
    cin.getline(Arr,20);

    cout<<"Enter the Character\n";
    cin>>cValue;

    String obj;

    int iRet = obj.ChkChar(Arr,cValue);
    if(iRet == true)
    {
        cout<<"Character Found\n";
    }
    else
    {
        cout<<"Character Not Found\n";
    }

    return 0;
}