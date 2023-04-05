//write a Recursive program which display below pattern?
// output : a  b  c  d  e

#include<iostream>
using namespace std;

class Pattern
{
    public:
        void DisplayR()
        {
            static int i = 1;
            static char ch = 'a';
            
            if(i <= 6)
            {
                cout<<ch<<"\t";
                ch++;
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