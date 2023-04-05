//write a program which accept one number from user and print Even factors of that number
// input : 36
// output : 2  4  6  12  18

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

        void Display()
        {
            int iCnt = 0;

            for(iCnt = 1; iCnt < iNo; iCnt++)
            {
                if((iNo % iCnt == 0) && (iCnt % 2 == 0))
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

    Numbers *obj = new Numbers(iValue1);

    obj->Display();

    delete obj;

    return 0;
}
