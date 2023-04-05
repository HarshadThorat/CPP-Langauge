// Write a program which accept number from user and display its digits in reverse.
// input : 2395
// output : 5
//          9 
//          3 
//          2

#include<iostream>
using namespace std;

class Digits
{
    public:
        int No;

        Digits(int A)
        {
            No = A;
        }

        void DisplayDigit()
        {
            int iDigit = 0;
          
            while(No != 0)
            {
                iDigit = No % 10;
                cout<<iDigit<<"\n";
                No = No / 10;
            }  
        }

};

int main()
{
    int iValue = 0;

    cout<<"Enter the number : "<<"\n";
    cin>>iValue;

    Digits obj(iValue);

    obj.DisplayDigit();

    return 0;
}
