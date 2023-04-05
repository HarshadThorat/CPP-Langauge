//write generic program to multiply two number

#include<iostream>
using namespace std;
template<class T>

T Multiply(T No1, T No2)
{
    T Ans = 0;
    Ans = No1 * No2;
    return Ans;
}

int main()
{
    int ret = 0;
    ret = Multiply(10,20);
    cout<<"Multiplication is : "<<ret<<"\n";

    ret = Multiply(10.2f,10.5f);
    cout<<"Multiplication is : "<<ret<<"\n";
}
