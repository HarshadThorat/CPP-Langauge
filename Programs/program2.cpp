// Display N times Marvellous on screen

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

        void Display()
        {
            int iCnt = 0;

            for(iCnt = 1; iCnt <= iNo1; iCnt++)
            {
                cout<<"Marvellous"<<"\n";
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
