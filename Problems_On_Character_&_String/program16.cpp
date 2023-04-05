// Write a program which accept string from user and convert it into lower case.
// input :  "Marvellous Multi OS"  
// output :   marvellous multi os


#include<iostream>
using namespace std;


class String
{
    public:
        void strlwr(char *str)
        {
            while(*str  != '\0')
            {
                if((*str >= 'A') && (*str <= 'Z'))
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

    obj.strlwr(Arr);

    cout<<"String is converted into lower case : "<<Arr;

    return 0;
}