// Write a program which accept string from user and check whether it contain vowels in it or not.
// input :  "Marvellous"            "xyz"  
// output :   true                  false


#include<iostream>
using namespace std;

class String
{
    public:
        int CheckVowels(char *str)
        {
            while(*str != '\0')
            {
                if((*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U') || (*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
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
    int iRet = 0;

    cout<<"Enter the string"<<"\n";
    cin.getline(Arr,20);

    String obj;

    iRet = obj.CheckVowels(Arr);
    if(iRet == true)
    {
        cout<<"It contain vowels"; 
    }
    else
    {
        cout<<"It not contain vowels";
    }


}