//write a program which accept one number from user and print that number of even number on screen
// input : 7
// output : 2 4 6 8 10 12 14

#include<iostream>
using namespace std;

class Numbers
{
    public:
        int iNo1;

        Numbers(int A)
        {
            iNo1 = A;
        }

};

class Marvellous : public Numbers
{
    public:
        Marvellous(int A) : Numbers(A)
        {}

        void Display()
        {
            int iCnt = 0;

            for(iCnt = 1; iCnt <= iNo1; iCnt++)
            {
                cout<<2 * iCnt<<"\t";
            }
        }
};

int main()
{
    int iValue1 = 0;

    cout<<"Enter First number : \n";
    cin>>iValue1;

    Marvellous *obj = new Marvellous(iValue1);

    obj->Display();

    delete obj;

    return 0;
}
