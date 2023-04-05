
//write a Recursive program which accept string from user and Count number of white spaces?
//Input : He ll o
// output : 2

#include<iostream>
using namespace std;

class Alphabate
{
    public:
        int CountWhiteSpacesR(char *str)
        {
            static int iCnt = 0;

            if(*str != '\0')
            {
                if(*str == ' ')
                {
                    iCnt++;
                }
                str++;
                CountWhiteSpacesR(str);
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

    ret = obj.CountWhiteSpacesR(Arr);
    cout<<"Number of White Spaces are : "<<ret<<"\n";
    
    return 0;
}