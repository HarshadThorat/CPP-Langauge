// Accept number from user and display below pattern
// input : 5
// output : 1  #   2   #   3   #   4   #   5   #


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

            for(iCnt = 1; iCnt <= iNo; iCnt++)
            {
                cout<<iCnt<<"\t"<<"#"<<"\t";
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