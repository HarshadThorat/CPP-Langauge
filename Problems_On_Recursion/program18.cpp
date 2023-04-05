
//write a Recursive program which accept string from user and Count number of small character ?
//Input : Hello
// output : 4

#include<iostream>
using namespace std;

class Alphabate
{
    public:
        int CountSmallCharR(char *str)
        {
            static int iCnt = 0;

            if(*str != '\0')
            {
                if((*str >= 'a') && (*str <= 'z'))
                {
                    iCnt++;
                }
                str++;
                CountSmallCharR(str);
            }
            return iCnt;
        }
};


int main()
{
    char Arr[20];
    int ret = 0;

    cout<<"Enter the String\n";
    cin.getline(Arr,20);

    Alphabate obj;

    ret = obj.CountSmallCharR(Arr);
    cout<<"Number of Small character are : "<<ret<<"\n";
    
    return 0;
}