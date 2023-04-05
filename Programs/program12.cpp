//write a program which accept one number from user and print  factors of that number
// input : 24
// output : 1  2  4  6  8  12  

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
                if(iNo % iCnt == 0)
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

    obj.Display();

    return 0;
}
