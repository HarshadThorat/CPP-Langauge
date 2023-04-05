// program to Display 5 to 1 on screen

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

            for(iCnt = iNo1; iCnt > 0; iCnt--)
            {
                cout<<iCnt<<"\n";
            }
        }
};

int main()
{
    Numbers obj(5);

    obj.Display();

    return 0;
}
