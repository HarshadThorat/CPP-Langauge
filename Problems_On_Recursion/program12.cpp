//write a Recursive program which accept number from user and return the summation of its digit?
//Input : 879
// output : 24

#include<iostream>
using namespace std;

class Digit
{
    public:
        int AdditionR(int No)
        {
            static int Sum = 0;
            int iDigit = 0;

            if(No != 0)
            {
                iDigit = No % 10;
                Sum = Sum + iDigit;
                No = No / 10;
                AdditionR(No);
            }
            return Sum;
        }
};


int main()
{
    int value = 0;
    int ret = 0;

    cout<<"Enter the number\n";
    cin>>value;

    Digit obj;

    ret = obj.AdditionR(value);
    cout<<"Addition is : "<<ret<<"\n";
    
    return 0;
}