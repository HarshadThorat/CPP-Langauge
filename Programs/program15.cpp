// write a program which accept number from user and display its factor in decreasing order??
// input = 12
// output =  6 4 3 2 1

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

        int FactReverse()
        {
            int iCnt = 0;

            for(iCnt = (iNo/2); iCnt > 0; iCnt--)
            {
                if(iNo % iCnt == 0)
                {
                    cout<<iCnt<<"\n";
                }
            }
        }
};

int main()
{
    int iValue = 0;

    cout<<"Enter the number \n";
    cin>>iValue;

    Numbers obj(iValue);

    obj.FactReverse();
 
    return 0;
}