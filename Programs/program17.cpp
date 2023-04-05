// write a program which accept number from user and return summation of all its Non-factor??
// input = 12        10 
// output = 50       37 


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

        int SumNonFact()
        {
            int iCnt = 0;
            int iSum = 0;

            for(iCnt = 1; iCnt < iNo; iCnt++)
            {
                if(iNo % iCnt != 0) 
                {
                    cout<<iCnt<<"\n";
                    iSum = iSum + iCnt;
                }
            }
            return iSum;
        }
};

int main()
{
    int iValue1 = 0;
    int iRet = 0;

    cout<<"Enter First number : \n";
    cin>>iValue1;

    Numbers *obj = new Numbers(iValue1);

    iRet = obj->SumNonFact();
    cout<<"Summation of non factors are : "<<iRet;

    delete obj;
    return 0;
}
