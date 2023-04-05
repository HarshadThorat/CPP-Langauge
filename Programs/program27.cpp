// Write a program which accept N from user and print all odd  number up to N.
// input = 18
// output = 1  3  5  7  9  11  13  15  17

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

        void DisplayOdd()
        {
            int iCnt = 0;

            for(iCnt = 1; iCnt <= iNo; iCnt++)
            {
                if(iCnt % 2 != 0)
                {
                    cout<<iCnt<<"\t";
                }               
            }
        }
};

int main()
{
    int iValue = 0;

    cout<<"Enter the number \n";
    cin>>iValue;

    Numbers obj(iValue);

    obj.DisplayOdd();

    return 0;
}