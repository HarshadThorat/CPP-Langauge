// Accept character from user and display its ASCII value in decimal, octal, hexadecimal format.
// input : A          Decimal       65
//                    Octal         0101
//                    Hexadecimal   0X41

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
            if((ch >= 'A') && (ch <= 'Z'))
            {
                cout<<"Decimal value : "<<(int)ch<<"\n";
                cout<<"Hexadecimal value : "<<(int)ch<<"\n";
                cout<<"Octal value : "<<(int)ch<<"\n";
            }
            else if((ch >= 'a') && (ch <= 'z'))
            {
                cout<<"Decimal value"<<ch<<"\n";
                cout<<"Hexadecimal value"<<ch<<"\n";
                cout<<"Octal value"<<ch<<"\n";
                
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