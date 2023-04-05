// Accept number from user and display below pattern
// input : 5
// output : A  B  C  D  E


#include<iostream>
using namespace std;


class Display
{
    public:
        int iNo;

        Display(int i)
        {
            iNo = i;
        }

        void Pattern()
        {
            int iCnt = 0;
            char ch = 'A';

            for(iCnt = 1; iCnt <= iNo; iCnt++)
            {
                cout<<ch<<"\t";
                ch++;
            }
        }
};

int main()
{
    int iValue = 0;

    cout<<"Enter the number"<<"\n";
    cin>>iValue;
    
    Display obj(iValue);

    obj.Pattern();

    return 0;
}