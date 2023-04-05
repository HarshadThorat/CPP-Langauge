//write a Recursive program which accept number from user and display below pattern?
// output : 5  *  4  *  3  *  2  *  1  *

#include<iostream>
using namespace std;

class Pattern
{
    public:
        void DisplayR(int No)
        {
            static int i = No;
            
            if(i > 0)
            {
                cout<<i<<"\t"<<"*\t";
                i--;
                DisplayR(No);
                
            }
        }
};


int main()
{
    int value = 0;

    cout<<"Enter the number\n";
    cin>>value;

    Pattern obj;

    obj.DisplayR(value);

    return 0;
}