//write generic program to find largest number from three numbers

#include<iostream>
using namespace std;
template<class T>

T Maximum(T No1, T No2, T No3)
{
    if(No1 > No2)
    {
        cout<<"Largest number is  : "<<No1<<"\n";
    }
    else if(No2 > No3)
    {
        cout<<"Largest number is  : "<<No2<<"\n";
    }
    else if(No3 > No1)
    {
        cout<<"Largest number is  : "<<No3<<"\n";
    }
}

int main()
{
    int value1 = 0, value2 = 0, value3 = 0;
    cout<<"Enter First number\n";
    cin>>value1;
    cout<<"Enter Second number\n";
    cin>>value2;
    cout<<"Enter Three number\n";
    cin>>value3;
    Maximum(value1,value2,value3);

    double A = 0.0, B = 0.0, C = 0;
    cout<<"Enter First number\n";
    cin>>A;
    cout<<"Enter Second number\n";
    cin>>B;
    cout<<"Enter Three number\n";
    cin>>C;
    Maximum(A,B,C);


}
