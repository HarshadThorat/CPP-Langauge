//write generic program to accept N value and and search Last occurance of any specific value 
//Input :  10 20 30 10 30 40 10 40 10 
//Output :  7 (40)

#include<iostream>
using namespace std;
template<class T>

T LastOccurance(T *Arr, int Size, T No)
{
    int iCnt = 0;
    int ipos = -1;
    
    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        if(Arr[iCnt] == No)
        {
            ipos = iCnt;
        }
    }    
    return ipos;
    
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
    cout<<"Enter the number you have to find\n";
    cin>>No;
    
    ret = LastOccurance(Arr,size,No);
    cout<<"Number ocurs at Index : "<<ret<<"\n";
    
    return 0;
}
