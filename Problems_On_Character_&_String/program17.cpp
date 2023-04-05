// Write a program which accept string from user and convert it into Upper case.
// input :   marvellous multi os 
// output :  "Marvellous Multi OS" 


#include<iostream>
using namespace std;


class String
{
    public:
        void strUpr(char *str)
        {
            while(*str  != '\0')
            {
                if((*str >= 'a') && (*str <= 'z'))
                {
                    *str = *str - 32;
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

    obj.strUpr(Arr);

    cout<<"String is converted inti Upper case : "<<Arr;

    return 0;
}