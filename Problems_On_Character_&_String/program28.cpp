//write a program which accept string from user and return difference between frequency of small character and frequency of capital character.
// input  :  MarvellouS
// output :  6 (8-2)


#include<iostream>
using namespace std;

class String
{
    public:
        int CountDiff(char *str)
        {
            int iCntCap = 0;
            int iCntSml = 0;

            while(*str != '\0')
            {
                if((*str >= 'a') && (*str <= 'z'))
                {
                    iCntCap++;
                }
                else
                {
                    iCntSml++;
                }
                str++;
            }
            return (iCntCap - iCntSml);
        }
};


int main()
{
    char Arr[20];
    int ret = 0;

    cout<<"Enter the string\n";
    cin.getline(Arr,20);

    String obj;

    ret = obj.CountDiff(Arr);
    cout<<"Difference are : "<<ret<<"\n";    
}
