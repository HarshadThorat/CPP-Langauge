//write a program which accept string from user and return difference between frequency of small character and frequency of capital character.
// input  :  MarvellouS
// output :  6 (8-2)


#include<iostream>
using namespace std;

class String
{
    public:
        bool CheckVowels(char *str)
        {
            bool flag = false;

            while(*str != '\0')
            {
                if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') || (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
                {
                    flag = true;
                }
                str++;
            }
            return flag;;
        }
};


int main()
{
    char Arr[20];
    bool ret = false;

    cout<<"Enter the string\n";
    cin.getline(Arr,20);

    String obj;

    ret = obj.CheckVowels(Arr);
    if(ret == true)
    {
        cout<<"It contain vowels\n";
    }
    else
    {
        cout<<"It NOT contain vowels\n";
    }    
}
