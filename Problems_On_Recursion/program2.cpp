//write a Recursive program which display below pattern?
// output : 1   2   3   4   5

#include<iostream>
using namespace std;

class Pattern
{
    public:
        void DisplayR()
        {
            static int i = 1;
            
            if(i <= 5)
            {
                cout<<i<<"\t";
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