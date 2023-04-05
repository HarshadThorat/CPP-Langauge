//write a Recursive program which accept number from user and return the Maximun digit?
//Input : 523
// output : 5

#include<iostream>
using namespace std;

class Digit
{
    public:
        int MaximumR(int No)
        {
            static int Max = 0;
            int iDigit = 0;

            if(No != 0)
            {
                iDigit = No % 10;
                if(iDigit > Max)
                {
                    Max = iDigit;
                }
                No = No / 10;
                MaximumR(No);
            }
            return Max;
        }
};


int main()
{
    int value = 0;
    int ret = 0;

    cout<<"Enter the number\n";
    cin>>value;

    Digit obj;

    ret = obj.MaximumR(value);
    cout<<"Maximum digit is : "<<ret<<"\n";
    
    return 0;
}