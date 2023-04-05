// Write a program which accept N from user and print first 5 multiples of N.
// input = 4
// output = 4   8   12   16   20

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

        void MultiplyDisplay()
        {
            int iCnt = 0;

            for(iCnt = 1; iCnt <= 5; iCnt++)
            {
                
                cout<<iNo*iCnt<<"\t";
                               
            }
        }
};

int main()
{
    int iValue = 0;

    cout<<"Enter the number \n";
    cin>>iValue;

    Numbers obj(iValue);

    obj.MultiplyDisplay();

    return 0;
}