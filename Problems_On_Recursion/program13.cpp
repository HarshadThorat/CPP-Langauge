//write a Recursive program which accept string from user and Count number of character?
//Input : Hello
// output : 5

#include<iostream>
using namespace std;

class Alphabate
{
    public:
        int CountCharR(char *str)
        {
            static int iCnt = 0;

            if(*str != '\0')
            {
                iCnt++;
                str++;
                CountCharR(str);
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

    ret = obj.CountCharR(Arr);
    cout<<"Number of characters are : "<<ret<<"\n";
    
    return 0;
}