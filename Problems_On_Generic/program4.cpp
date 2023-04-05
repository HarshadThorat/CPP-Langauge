//write generic program to accept N values user and return Largest values.

#include<iostream>
using namespace std;
template<class T>

T Maximum(T *Arr, int size)
{
    T Max = Arr[0];

    for(int i = 0; i < size; i++)
    {
        if(Arr[i] > Max)
        {
            Max = Arr[i];
        }
    }
    return Max;
}

int main()
{
    int Arr[] = {10,20,30,40,50};
    int ret = Maximum(Arr,5);
    cout<<"Maximum element is : "<<ret<<"\n";
     
    float Brr[] = {10.0,3.7,9.8,8.7};
    ret = Maximum(Brr,4);
    cout<<"Maximum element is : "<<ret<<"\n";
    
}
