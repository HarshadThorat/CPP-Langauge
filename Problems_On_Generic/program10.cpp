//write generic program to accept N value and and Reverse the content 
//Input :  10 20 30 10 30 40 10 40 10
//Output : 10  40  10  40  30  10  30  20  10  
 

#include<iostream>
using namespace std;
template<class T>

void Reverse(T *Arr, int Size)
{
    int temp = 0; 
    int start = 0;
    int end = Size-1;

    while(start < end)
    {
        temp = Arr[start];
        Arr[start] = Arr[end];
        Arr[end] = temp;

        start++;
        end--;
    }
    
    for(int i = 0; i < Size; i++)
    {
        cout<<Arr[i]<<"\t";
    }
    
}

int main()
{
    int size = 0;
    int No = 0;

    cout<<"Enter the size of array\n";
    cin>>size;

    int *Arr = new int[size];

    for(int i = 0; i < size; i++)
    {
        cin>>Arr[i];
    }
    
    Reverse(Arr,size);
    
    return 0;
}
