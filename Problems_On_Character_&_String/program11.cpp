// Write a program which accept string from user and count number of capital character.
// input :  "Marvellous Multi OS"  
// output :   4


#include<iostream>
using namespace std;

class String
{
    public:
        int CountCapital(char *str)
        {
           int iCnt = 0;

            while(*str != '\0')
            {
                if((*str >= 'A') && (*str <= 'Z'))
                {
                    iCnt++;
                }
                str++;
            }
            return iCnt;
            
        }
};

int main()
{
    char Arr[20];

    cout<<"Enter the String"<<"\n";
    cin.getline(Arr,20);

    String obj;

    int iRet = obj.CountCapital(Arr);
    cout<<"Capital letters are : "<<iRet<<"\n";

    return 0;
}