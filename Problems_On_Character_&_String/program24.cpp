// write a program which accept string from user and accept one character. return index of first occurance of that character.
// input : Marvellous   Multi OS
// output : (M)  0  


#include<iostream>
using namespace std;


class String
{
    public:
        int LastChar(char str[] , char ch)
        {
            int i = '\0';

            for(i = '\0'; str[i] >= 0; i--)
            {
                if(str[i] == ch)
                {
                    return i;
                }
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

    int iRet = obj.LastChar(Arr,cValue);
    cout<<"character present at index : "<<iRet;

    return 0;
}

