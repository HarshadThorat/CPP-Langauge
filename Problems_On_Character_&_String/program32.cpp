//Write a program which 2 strings from user and check whether contents of two strings are equal or not.
// Input : Marvellous Infosystem
//         Marvellous Infosystem
//         
//output : TRUE

#include<iostream>
using namespace std;

class String
{
    public:
        int strCmpX(char *str1 , char *str2)
        {
            int flag = 0;
            int i = 0;

            while(str1[i] != '\0' && str2[i] != '\0')
            {
                if(str1[i] != str2[i])
                {
                    flag = 1;
                    break;
                }
                i++;
            }

            if(flag == 0)
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
};


int main()
{
    char Arr[30];
    char Brr[30];
    int ret = 0;

    cout<<"Enter the first string\n";
    cin.getline(Arr,30);

    cout<<"Enter the second string\n";
    cin.getline( Brr,30);

    String obj;

    ret = obj.strCmpX(Arr,Brr);
    if(ret == 0)
    {
        cout<<"Content of String is equal\n";
    }
    else
    {
        cout<<"Content of String is NOT equal\n";
    }
        
}
