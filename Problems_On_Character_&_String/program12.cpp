// Write a program which accept string from user and count number of Small character.
// input :  "Marvellous"  
// output :   9


#include<iostream>
using namespace std;

class String
{
    public:
        int CountSmall(char *str)
        {
            int iCnt = 0;

            while(*str != '\0')
            {
                if((*str >= 'a') && ((*str <= 'z')))
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
    int iRet = 0;

    cout<<"Enter the string"<<"\n";
    cin.getline(Arr,20);

    String obj;

    iRet = obj.CountSmall(Arr);
    cout<<"Small letters are : "<<iRet;


}