// Write a program to find factorial of given number
// Input: 5
// Output: 120   (5 *4 *3 *2 *1)

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

        int Factorial()
        {
            int iCnt = 0;
            int iFact = 1;

            for(iCnt = iNo; iCnt >= 1 ; iCnt--)
            {
                iFact = iFact * iCnt;  
            }
            return iFact;
        }
       
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number \n";
    cin>>iValue;

    Numbers obj(iValue);

    iRet = obj.Factorial();
    cout<<"Factorial is : "<<iRet;
    return 0;
}