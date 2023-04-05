//Write a program which accepts 2 strings from user and concat N characters of second string after first string.Value of N should be accepted from user.

//Note: If third parameter is greater than the size of second string then concat whole string after first string.
// Input : Marvellous Infosystem
//         Logic Building
//          5
//output : "Marvellous Infosystem Logic" 


#include<iostream>
using namespace std;

class String
{
    public:
        void strCatX(char *str , char * Dest , int iNo)
        {
            int iCnt = 0;

            while(*str != '\0')
            {
                str++;
            }

            *str = ' ';
            str++;
            for(iCnt = 1; iCnt <= iNo ; iCnt++)
            {
                *str = *Dest;
                if(*str == ' ')
                    *Dest = ' ';
                str++;
                Dest++;
            }
        }
};


int main()
{
    char Arr[30];
    char Brr[30];
    int No = 0;

    cout<<"Enter the first string\n";
    cin.getline(Arr,30);

    cout<<"Enter the second string\n";
    cin.getline( Brr,30);

    cout<<"Enter the Number of character of 2nd string that you want to concat\n";
    cin>>No;

    String obj;

    obj.strCatX(Arr,Brr,No);

    cout<<"new String is : "<<Arr;
        
}
