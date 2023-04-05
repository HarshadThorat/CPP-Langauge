//write a program which accept string fronm user and count number of capital character
// input  :  Marvellous Multi OS
// output :  4


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
    int ret = 0;

    cout<<"Enter the string\n";
    cin.getline(Arr,20);

    String obj;

    ret = obj.CountCapital(Arr);
    cout<<"Number of Capital character are : "<<ret<<"\n";    
}
