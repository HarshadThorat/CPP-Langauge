// Write a program which accept number from user and display its table
// Input: 2
// Output: 2   4  6  8  10 12 14 16 18 20

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

        void DisplayTable()
        {
            int iCnt = 0;

            for(iCnt = 1; iCnt <= 10 ; iCnt++)
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

    Numbers *obj = new Numbers(iValue);

    obj->DisplayTable();
    
    delete obj;
    
    return 0;
}