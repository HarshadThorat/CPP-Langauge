// Write a program which display ASCII table.table contain symbol,Decimal,Hexadecimal and octal representation of every member from 0 to 255.
//incomplete

#include<iostream>
using namespace std;

int main()
{
    int i = 0;

    cout<<"_________________\n";
    cout<<"ASCII table\n";
    cout<<"_________________\n";
    
    cout<<"Charcter\t Decimal\t Hex\t Octal\n";

    for(i = 0; i <= 127; i++)
    {
        cout<<i<<"\n";
    }

    cout<<"\n_________________\n";

    return 0;
}