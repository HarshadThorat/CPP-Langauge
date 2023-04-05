//write a Recursive program which display below pattern?
// output : A  B  C  D  E  F

#include<iostream>
using namespace std;

class Pattern
{
    public:
        void DisplayR()
        {
            static int i = 1;
            static char ch = 'A';
            
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