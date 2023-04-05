// Write a program which accept number from user and if number is less than 50 then print small, if it is greater than 50 and less than 100 then print medium, if it is greater than 100 then print large.
// Input: 75 
// Output: Medium

#include<iostream>
using namespace std;

class Numbers
{
    public:
        int iNo;

        Numbers(int A)
        {
            iNo = A;
        }

        void Display()
        {
            if(iNo < 50)
            {
                cout<<"Small\n";
            }
            else if((iNo > 50) && (iNo < 100))
            {
                cout<<"Medium\n";
            }
            else
            {
                cout<<"Large\n";
            }
        }
};

int main()
{
    int iValue = 0;

    cout<<"Enter the number \n";
    cin>>iValue;

    Numbers obj(iValue);

    obj.Display();

    return 0;
}