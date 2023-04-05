//write java program which accept two arrays from user and display Summation of each array
//Input : 2  9  6  5  2  3
//        9  3  5  5

//Outut : 27
//        22
          


#include<iostream>
using namespace std;


class Number
{
    public:
        void AddDisplay(int Arr1[], int size1, int Arr2[], int size2)
        {
            int Sum1 = 0; 
            int Sum2 = 0; 
            int iCnt = 0;

            for(iCnt = 0; iCnt < size1; iCnt++)
            {
                Sum1 = Sum1 + Arr1[iCnt];
            }
            cout<<"Addition of first array is : "<<Sum1<<"\n";

            for(iCnt = 0; iCnt < size2; iCnt++)
            {
                Sum2 = Sum2 + Arr2[iCnt];
            }
            cout<<"Addition of second array is : "<<Sum2<<"\n";
            
        }
};


int main()
{
    int value1 = 0;
    int value2 = 0;
    int *Arr = NULL;
    int *Brr = NULL;
    int i = 0;

    cout<<"Enter the size of first array\n";
    cin>>value1;

    Arr = new int[value1];
    
    cout<<"Enter the elements\n";
    for(i = 0; i < value1; i++)
    {
        cin>>Arr[i];
    }

    cout<<"Enter the size of second array\n";
    cin>>value2;

    Brr = new int[value2];
    
    cout<<"Enter the elements\n";
    for(i = 0; i < value2; i++)
    {
        cin>>Brr[i];
    }

    Number obj;

    obj.AddDisplay(Arr,value1,Brr,value2);

    return 0;
}