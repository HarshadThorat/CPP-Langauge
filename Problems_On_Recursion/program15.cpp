//write a Recursive program which accept number from user and return the product of its digit?
//Input : 523
// output : 30

#include<iostream>
using namespace std;

class Digit
{
    public:
        int ProductR(int No)
        {
            static int Mult = 1;
            int iDigit = 0;

            if(No != 0)
            {
                iDigit = No % 10;
                Mult = Mult * iDigit;
                No = No / 10;
                ProductR(No);
            }
            return Mult;
        }
};


int main()
{
    int value = 0;
    int ret = 0;

    cout<<"Enter the number\n";
    cin>>value;

    Digit obj;

    ret = obj.ProductR(value);
    cout<<"product of digit is : "<<ret<<"\n";
    
    return 0;
}