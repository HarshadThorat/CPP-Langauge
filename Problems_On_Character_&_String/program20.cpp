// Write a program which accept string from user and Count number of white spaces.
// input :  Marvellous        harsh ad  
// output :   0                1

#include<iostream>
using namespace std;


class String
{
    public:
        int CountWhileSpaces(char *str)
        {
            int iCnt = 0;

            while(*str  != '\0')
            {
                if(*str == ' ')
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

    cout<<"Enter the string\n";
    cin.getline(Arr,20);

    String obj;

    int iRet = obj.CountWhileSpaces(Arr);
    cout<<"White spaces are : "<<iRet;

    return 0;
}