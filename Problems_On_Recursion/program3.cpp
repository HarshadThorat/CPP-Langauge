//write a Recursive program which display below pattern?
// output : 5  4  3  2  1

#include<iostream>
using namespace std;

class Pattern
{
    public:
        void DisplayR()
        {
            static int i = 5;
            
            if(i > 0)
            {
                cout<<i<<"\t";
                i--;
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