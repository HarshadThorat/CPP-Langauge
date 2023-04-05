//write a Recursive program which display below pattern?
// output : A  B  C  D  E  F

#include<iostream>
using namespace std;

class Pattern
{
    public:
        void DisplayR(int No)
        {
            static int i = 1;
            static char ch = 'A';
            
            if(i <= No)
            {
                cout<<ch<<"\t";
                ch++;
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