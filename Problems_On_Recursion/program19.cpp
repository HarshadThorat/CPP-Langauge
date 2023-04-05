//write a Recursive program which accept number from user and return the Smallest digit?
//Input : 523
// output : 2

#include<iostream>
using namespace std;

class Digit
{
    public:
        int MinimumR(int No)
        {
            static int Min = 9;
            int iDigit = 0;

            if(No != 0)
            {
                iDigit = No % 10;
                if(iDigit < Min)
                {
                    Min = iDigit;
                }
                No = No / 10;
                MinimumR(No);
            }
            return Min;
        }
};


int main()
{
    int value = 0;
    int ret = 0;

    cout<<"Enter the number\n";
    cin>>value;

    Digit obj;

    ret = obj.MinimumR(value);
    cout<<"Minimum digit is : "<<ret<<"\n";
    
    return 0;
}