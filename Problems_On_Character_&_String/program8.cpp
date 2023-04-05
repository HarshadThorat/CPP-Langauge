// Accept character from user. 
//If it is capital then display all the characters from the input characters till Z. 
//If input character is small then print all the characters in reverse order till a.
// In other cases return directly.
// Input: Q
// Output: Q R S T U V W X Y Z
// Input: m
// Output: m k j h g f e d c b a

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
            while((ch >= 'a') && (ch <= 'z'))
            {
                cout<<ch<<"\t";
                ch--;
            }
            
            while((ch >= 'A') && (ch <= 'Z'))
            {
                cout<<ch<<"\t";
                ch++;
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