//write a Recursive program which display below pattern?
// output : * * * * *

#include<iostream>
using namespace std;

class Pattern
{
    public:
        void DisplayR(int No)
        {
            static int i = 0;
            
            if(i < No)
            {
                cout<<"*\t";
                i++;
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