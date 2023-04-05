//write a Recursive program which accept number from user and return the Reverse digit?
//Input : 523
// output : 325

#include<iostream>
using namespace std;

class Digit
{
    public:
        int ReverseR(int No)
        {
            static int Rev = 0;
            int iDigit = 0;

            if(No != 0)
            {
                iDigit = No % 10;
                Rev = (Rev * 10) + iDigit;
                No = No / 10;
                ReverseR(No);
            }
            return Rev;
        }
};


int main()
{
    int value = 0;
    int ret = 0;

    cout<<"Enter the number\n";
    cin>>value;

    Digit obj;

    ret = obj.ReverseR(value);
    cout<<"Reverse digit is : "<<ret<<"\n";
    
    return 0;
}