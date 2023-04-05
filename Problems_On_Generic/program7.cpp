//write generic program to accept N value and and count frequency of any specific value 
//Input :  10 20 30 10 30 40 1 0 40 10 
//Output : 4  (10)

#include<iostream>
using namespace std;
template<class T>

T CheckFrequency (T *Arr, int Size, T No)
{
    int iCnt = 0;

    for(int i = 0; i < Size; i++)
    {
        if(Arr[i] == No)
        {
            iCnt++;
        }
    }
    return iCnt;
}

int main()
{
    int size = 0;
    int No = 0;
    int ret = 0;

    cout<<"Enter the size of array\n";
    cin>>size;

    int *Arr = new int[size];

    for(int i = 0; i < size; i++)
    {
        cin>>Arr[i];
    }
    cout<<"Enter the number you have to chech frequency\n";
    cin>>No;
    
    ret = CheckFrequency(Arr,size,No);
    cout<<"Frequency is : "<<ret<<"\n";

    return 0;
}
