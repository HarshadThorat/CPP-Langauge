//write generic program to accept N values user and return addition of that values

#include<iostream>
using namespace std;
template<class T>

T Addition(T *Arr, int size)
{
    int Sum = 0;

    for(int i = 0; i < size; i++)
    {
        Sum = Sum + Arr[i];
    }
    return Sum;
}

int main()
{
    int Arr[] = {10,20,30,40,50};
    int ret = Addition(Arr,5);
    cout<<"Addition is : "<<ret<<"\n";
     
    float Brr[] = {10.0,3.7,9.8,8.7};
    ret = Addition(Brr,4);
    cout<<"Addition is : "<<ret<<"\n";
    
}
