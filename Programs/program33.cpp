// Write a program which accept number from user and display its table in  reverse order.
// Input: 2
// Output: 20 18  16 14 12 10 8 6 4 2

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

        void DisplayRevTable()
        {
            int iCnt = 0;

            for(iCnt = 10; iCnt >= 1; iCnt--)
            {
                cout<<iNo * iCnt<<"\t";
            }
        }       
};

int main()
{
    int iValue = 0;

    cout<<"Enter the number \n";
    cin>>iValue;

    Numbers obj(iValue);

    obj.DisplayRevTable();
    
    return 0;
}