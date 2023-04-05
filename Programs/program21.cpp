// Write a program which accept two number from user and check whether number is equal or not .
// input = 10  10         10  12
// output = equal        not equal 

#include<iostream>
using namespace std;

class Numbers
{
    public:
        int iNo1;
        int iNo2;

        Numbers(int A,int B)
        {
            iNo1 = A;
            iNo2 = B;
        }

        bool ChkEqual()
        {
            if(iNo1 == iNo2)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    bool bRet = false;

    cout<<"Enter First number : \n";
    cin>>iValue1;
    
    cout<<"Enter Second number : \n";
    cin>>iValue2;

    Numbers *obj = new Numbers(iValue1,iValue2);

    bRet = obj->ChkEqual();
    if(bRet == true)
    {
        cout<<"Equal"<<"\n";
    }
    else
    {
        cout<<"Not Equal"<<"\n";
    }

    delete obj;

    return 0;
}
