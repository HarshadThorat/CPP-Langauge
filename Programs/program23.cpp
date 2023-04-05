// Write a program which accept total marks & obtain marks from user and calculate percentage.
// input = 1000    745 
// output = 74.5


#include<iostream>
using namespace std;

class Numbers
{
    public:
        float iTotal;
        float iObtain;

        Numbers(int A,int B)
        {
            iTotal = A;
            iObtain = B;
        }

        float Percentage()
        {
            float iAns = 0.0;

            iAns = ((iObtain / iTotal) * 100);
            return iAns;
        }
};

int main()
{
    int iValue1 = 0.0;
    int iValue2 = 0.0;
    float fRet = 0.0 ;

    cout<<"Enter First number : \n";
    cin>>iValue1;
    
    cout<<"Enter Second number : \n";
    cin>>iValue2;

    Numbers obj(iValue1,iValue2);

    fRet = obj.Percentage();
    cout<<"Percentage is : "<<fRet;

    return 0;
}
