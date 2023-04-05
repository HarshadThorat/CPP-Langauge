// write a program which accept number from user and display its multiplication of factor??
// input = 12
// output =  1 * 2 * 3 * 4 * 6

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

        int MultFact()
        {
            int iCnt = 0;
            int iMult = 1;

            for(iCnt = 1; iCnt < iNo; iCnt++)
            {
                if(iNo % iCnt == 0)
                {
                    cout<<iCnt<<"\n";
                    iMult = iMult * iCnt;
                }
            }
            return iMult;
        }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number \n";
    cin>>iValue;

    Numbers obj(iValue);

    iRet = obj.MultFact();
    cout<<"multiplication of the factor is : "<<iRet;

    return 0;
}