//Write a program which 2 strings from user and check whether first N character of two strings are equal or not.
// Input : Marvellous Infosystem
//         Marvellous Infosystem
//         10
//output : TRUE


#include<iostream>
using namespace std;

class String
{
    public:
        int strCmpX(char *str1 , char *str2, int No)
        {
            int flag = 0;
            int i = 0;

            while(i < No)
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
    int value = 0;
    int ret = 0;

    cout<<"Enter the first string\n";
    cin.getline(Arr,30);

    cout<<"Enter the second string\n";
    cin.getline( Brr,30);

    cout<<"Enter the number\n";
    cin>>value;

    String obj;

    ret = obj.strCmpX(Arr,Brr,value);
    if(ret == 0)
    {
        cout<<"String of first 10 character are equal\n";
    }
    else
    {
        cout<<"String of first 10 character are NOT equal\n";
    }
        
}
