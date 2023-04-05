//Accept one number and check whether it is Even or Odd.

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

        bool CheckEvenOdd()
        {
            if(iNo % 2 == 0)
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
    int iValue = 0;
    bool bRet = false;; 
    
    cout<<"Enter First number : \n";
    cin>>iValue;

    Numbers *obj = new Numbers(iValue);

    bRet = obj->CheckEvenOdd();
    if(bRet == true)
    {
        cout<<"Number is Even : "<<"\n";
    }
    else
    {
        cout<<"Number is Odd : "<<"\n";
    }

    delete obj;

    return 0;
}
