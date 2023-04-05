// write a program to find even factorial of given number
// input : 5
// output : 8    (4 * 2)

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

        int EvenFactorial()
        {
            int iCnt = 0;
            int iFact = 1;

            for(iCnt = 1; iCnt <= iNo ; iCnt++)
            {
                if(iCnt % 2 == 0)
                {
                    iFact = iFact * iCnt;
                }
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

    iRet = obj.EvenFactorial();
    cout<<"Multiplication of Even Factorial is : "<<iRet;
 
    return 0;
}