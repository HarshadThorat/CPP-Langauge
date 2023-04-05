// problem to divide two numbers

#include<iostream>
using namespace std;

class Numbers
{
    public:
        int iNo1;
        int iNo2;

        Numbers(int A, int B)
        {
            iNo1 = A;
            iNo2 = B;
        }

        int Divide()
        {
            int iAns = 0;

            iAns = iNo1 / iNo2;
            return iAns;
        }
};

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    cout<<"Enter First number : \n";
    cin>>iValue1;

    cout<<"Enter Second number : \n";
    cin>>iValue2;

    Numbers *obj = new Numbers(iValue1, iValue2);

    iRet = obj->Divide();
    cout<<"Division is : "<<iRet;

    delete obj;

    return 0;
}
