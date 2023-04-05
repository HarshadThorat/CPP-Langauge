//write a Recursive program which accept number from user and return its Factorial?
// Input :  5
// output :  120

#include<iostream>
using namespace std;

class Number
{
    public:
        int FactorialR(int No)
        {
            static int i = 1;
            static int Mult = 1;

            if(i <= No)
            {
                Mult = Mult * i;
                i++;
                FactorialR(No);
            }
            return Mult;
        }
};


int main()
{
    int value = 0;
    int ret = 0;

    cout<<"Enter the number\n";
    cin>>value;

    Number obj;

    ret = obj.FactorialR(value);

    cout<<"Factorial is : "<<ret<<"\n";
    
    return 0;
}