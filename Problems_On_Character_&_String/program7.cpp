// Accept character from user. if character is small display its corresponding capital character.
// and if it small then display its corresponding capital.in other cases display as it is??
// Input :    Q      m      4        %              
// output :   q      M      4        %

#include<iostream>
using namespace std;

class Alphabate
{
    public:
        char ch;

        Alphabate(char A)
        {
            ch = A;
        }

        void Display()
        {
            if((ch >= 'a') && (ch <= 'z'))
            {
                ch = ch - 32;
                cout<<ch;
            }
            else if((ch >= 'A') && (ch <= 'Z'))
            {
                ch = ch + 32;
                cout<<ch;
            }
            else
            {
                cout<<ch;
            }
        }
};

int main()
{
    char cValue = '0'; 

    cout<<"Enter the Character"<<"\n";
    cin>>cValue;

    Alphabate *obj = new Alphabate(cValue);

    obj->Display();

    delete obj;

    return 0;
    
}