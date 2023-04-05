// Write a program which accept number from user and print that number of $ and * on screen .
// input = 5
// output = $ * $ * $ * $ * $ *


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
            int iCnt = 0;

            for(iCnt = 0; iCnt < iNo; iCnt++)
            {
                cout<<"$"<<"\t"<<"*"<<"\t";
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