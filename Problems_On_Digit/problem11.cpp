//write a program which accept number from user and return the count of Even digit
//Input :  2395     1018     8462
//Output :   1        2        4



#include<iostream>
using namespace std;

class Digit
{
    public:
        int EvenDigit(int No)
        {
            int iCnt = 0;
            int iDigit = 0;

            while(No != 0)
            {
                iDigit = No % 10;
                if(iDigit % 2 == 0)
                {
                    iCnt++;
                }
                No = No / 10;
            }
            return iCnt;
        }
};

int main()
{
    int ret = 0;
    int value = 0;

    cout<<"Enter the Digit\n";
    cin>>value;

    Digit obj;

    ret = obj.EvenDigit(value);
    cout<<"Count of Even number is  : "<<ret<<"\t";

    return 0;
}