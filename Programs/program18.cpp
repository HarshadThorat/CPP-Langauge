// write a program which accept number from user and return difference between summation of all its Non-factor and factors??
// input = 12        10 
// output = -34     -29

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

        int Factdiff()
        {
            int iCnt = 0;
            int iSum1 = 0;
            int iSum2 = 0;
            int iAns = 0;

            for(iCnt = 1; iCnt < iNo; iCnt++)
            {
                if(iNo % iCnt == 0) 
                {
                    cout<<iCnt<<"\n";
                    iSum1 = iSum1 + iCnt;
                }
                else
                {
                    cout<<iCnt<<"\n";
                    iSum2 = iSum2 + iCnt;
                }
            }
            return iSum1 - iSum2;
        }
};

int main()
{
    int iValue1 = 0;
    int iRet = 0;

    cout<<"Enter First number : \n";
    cin>>iValue1;

    Numbers obj(iValue1);

    iRet = obj.Factdiff();
    cout<<"Summation ofall factors and non-factors are : "<<iRet;

    return 0;
}
