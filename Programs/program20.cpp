// Write a program which accept one number from user and check whether that number is greater than 100 or not.
// input = 101               39
// output = Greater        Smaller 


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

        bool ChkGreater()
        {
            if(iNo > 100)
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
    bool bRet = false;

    cout<<"Enter First number : \n";
    cin>>iValue1;

    Numbers obj(iValue1);

    bRet = obj.ChkGreater();
    if(bRet == true)
    {
        cout<<"Greater"<<"\n";
    }
    else
    {
        cout<<"Smaller"<<"\n";
    }

    return 0;
}
