//write a Recursive program which display below pattern?
// output : * * * * *

#include<iostream>
using namespace std;

class Pattern
{
    public:
        void DisplayR()
        {
            static int i = 0;
            
            if(i < 5)
            {
                cout<<"*\t";
                i++;
                DisplayR();
            }
        }
};


int main()
{
    
    Pattern obj;

    obj.DisplayR();

    return 0;
}