// Write a program which accept number from user ans print number till that number.
// input = 8
// output = 1 2 3  4 5 6 7 8

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

            for(iCnt = 1; iCnt <= iNo; iCnt++)
            {
                cout<<iCnt<<"\t";
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