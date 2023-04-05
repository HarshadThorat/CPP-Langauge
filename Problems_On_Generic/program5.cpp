//write generic program to accept N values user and return Smallest values.

#include<iostream>
using namespace std;
template<class T>

T Minimum(T *Arr, int size)
{
    T Min = Arr[0];

    for(int i = 0; i < size; i++)
    {
        if(Arr[i] < Min)
        {
            Min = Arr[i];
        }
    }
    return Min;
}

int main()
{
    int Arr[] = {10,20,30,40,50};
    int ret = Minimum(Arr,5);
    cout<<"Minimum element is : "<<ret<<"\n";
     
    float Brr[] = {10.0,3.7,9.8,8.7};
    ret = Minimum(Brr,4);
    cout<<"Minimum element is : "<<ret<<"\n";
    
}
