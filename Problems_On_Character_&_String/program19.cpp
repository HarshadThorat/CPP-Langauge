// Write a program which accept string from user and display only digits from that string.
// input :  Marve89llous121  
// output :   89121


#include<iostream>
using namespace std;


class String
{
    public:
        void DisplayDigit(char *str)
        {
            while(*str  != '\0')
            {
                if((*str >= '0') && (*str <= '9'))
                {
                    cout<<*str<<"\n";
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

    obj.DisplayDigit(Arr);


    return 0;
}