//write generic program to accept one value and one number from user. print that value that number of times on screen
//Input : M  7                      11    3
//Output : M M M M M M M             11  11  11

#include<iostream>
using namespace std;
template<class T>

void Display(T value, int size)
{
    for(int i = 0; i < size; i++)
    {
        cout<<value<<"\t";
    }
    cout<<"\n";
}

int main()
{
    Display(11,3);
    Display(3.7,6);
    Display('M',7);
    
    return 0;
}
