//write a program which accept number from user and return the count of digit in between 3 & 7?
//Input :  2395     1018     9922    4521
//Output :  1        0        0       2 


#include<iostream>
using namespace std;

class Digit
{
    public:
        int CountRange(int No)
        {
            int iCnt = 0;
            int iDigit = 0;

            while(No != 0)
            {
                iDigit = No % 10;
                if((iDigit > 3) && (iDigit < 7))
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

    ret = obj.CountRange(value);
    cout<<"Number in between 3 & 7 is  : "<<ret<<"\t";

    return 0;
}