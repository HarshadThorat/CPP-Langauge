//write a Recursive program which display below pattern?
// output : 1   2   3   4   5

#include<iostream>
using namespace std;

class Pattern
{
    public:
        void DisplayR(int No)
        {
            static int i = 1;
            
            if(i <= No)
            {
                cout<<i<<"\t";
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