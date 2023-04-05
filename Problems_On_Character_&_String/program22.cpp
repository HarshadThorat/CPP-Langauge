// write a program which accept string from user and accept one character. return frequency of that character.
// input : Marvellous   Multi OS
// output : (M)  2    


#include<iostream>
using namespace std;


class String
{
    public:
        int ChkFrequency(char *str , char ch)
        {
            int iCnt = 0;

            while(*str  != '\0')
            {
                if(*str == ch)
                {
                    iCnt++;
                }
                str++;
            }
            return iCnt;
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

    int iRet = obj.ChkFrequency(Arr,cValue);
    cout<<"Frequency of "<<cValue<<" is : "<<iRet;

    return 0;
}