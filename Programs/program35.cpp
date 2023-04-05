//Accept amount in US dollar and return its corresponding value in Indian currency. 
// Consider 1$ as 70 rupees.
// Input :10                3
// Output : 700             210

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

        int DollerToINR()
        {
            int iAns = 0;

            iAns = iNo * 70;
            return iAns;
        }       
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number \n";
    cin>>iValue;

    Numbers obj(iValue);

    iRet = obj.DollerToINR();
    cout<<"Value in INR is : "<<iRet;
 
    return 0;
}