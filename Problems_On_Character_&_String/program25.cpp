// Write a program which accept string from user and display it in reverse order
// input :   "abcd" 
// output :   "dcba"


#include<iostream>
using namespace std;


class String
{
    public:
        int strrevX(char *str)
        {
            int i = '\0';

            char *start = str;
            char *end = str;
            char temp = '\0';

            while(*end != '\0')
            {
                end++;
            }
            end--;

            while(start < end)
            {
                temp = *start;
                *start = *end;
                *end = temp;

                start++;
                end--;
            }  
        }
};

int main()
{
    char Arr[20];
    
    cout<<"Enter the string\n";
    cin.getline(Arr,20);

    String obj;

    obj.strrevX(Arr);

    cout<<"Reverse string is : "<<Arr;

    return 0;
}

