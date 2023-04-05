// write a program which accept number from user and display all its  Non-factor??
// input = 12
// output = 5 7 8 9 10 11

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

        void NonFact()
        {
            int iCnt = 0;

            for(iCnt = 1; iCnt < iNo; iCnt++)
            {
                if(iNo % iCnt != 0) 
                {
                    cout<<iCnt<<"\t";
                }
            }
        }
};

int main()
{
    int iValue1 = 0;

    cout<<"Enter First number : \n";
    cin>>iValue1;

    Numbers obj(iValue1);

    obj.NonFact();

    return 0;
}
