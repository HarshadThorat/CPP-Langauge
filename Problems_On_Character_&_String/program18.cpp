// Write a program which accept string from user and convert it into toggle the case.
// input :  "Marvellous Multi OS"  
// output :   mARVELLOUS mULTI os


#include<iostream>
using namespace std;


class String
{
    public:
        void strToggleX(char *str)
        {
            while(*str  != '\0')
            {
                if((*str >= 'a') && (*str <= 'z'))
                {
                    *str = *str - 32;
                }
                else if((*str >= 'A') && (*str <= 'Z'))
                {
                    *str = *str + 32;
                }
                str++;
            }
        }
};

int main()
{
    char Arr[20];

    cout<<"Enter the string\n";
    cin.getline(Arr,20);

    String obj;

    obj.strToggleX(Arr);

    cout<<"String is converted inti Toggle case : "<<Arr;

    return 0;
}