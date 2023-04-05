//write a program which accept number from user and return the Multiplication of digit ?
//Input :  2395     1018     9440     
//Output :  270       8       144    


#include<iostream>
using namespace std;

class Digit
{
    public:
        int MultDigit(int No)
        {
            int iMult = 1;
            int iDigit = 0;

            while(No != 0)
            {
                iDigit = No % 10;
                if(iDigit == 0)
                {
                    iDigit = 1;
                }
                iMult = iMult * iDigit;
                No = No / 10;
            }
            return iMult;
        }
};

int main()
{
    int ret = 0;
    int value = 0;

    cout<<"Enter the Digit\n";
    cin>>value;

    Digit obj;

    ret = obj.MultDigit(value);
    cout<<"Multiplication of all the digits are : "<<ret<<"\t";

    return 0;
}