#include<iostream>
using namespace std;

class Numbers
{
    public:
        int No;

        Numbers(int A)
        {
            No = A;
        }

        void Display()
        {
            int iCnt = 0;

            for(iCnt = -No ; iCnt <= No; iCnt++)
            {
                cout<<iCnt<<"\t";
            } 
        }
};


int main()
{
    int value = 0;

    cout<<"Enter the number\n";
    cin>>value;

    Numbers obj(value);

    obj.Display();
}
