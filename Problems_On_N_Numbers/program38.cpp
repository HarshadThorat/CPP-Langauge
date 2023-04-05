//write java program which accept two arrays from user and display Odd contents of each array
//Input : 2  9  6  5  2  3
//        45 6  12 18 23 4 

//Outut : 9  5  3 
//        45  23  



#include<iostream>
using namespace std;


class Number
{
    public:
        void Display(int Arr1[], int size1, int Arr2[], int size2)
        {
            int iCnt = 0;

            cout<<"Odd Elements are\n";
            for(iCnt = 0; iCnt < size1; iCnt++)
            {
                if(Arr1[iCnt] % 2 != 0)
                {
                    cout<<Arr1[iCnt]<<"\t";
                }
            }
            cout<<"\n";

            cout<<"Odd Elements are\n";
            for(iCnt = 0; iCnt < size2; iCnt++)
            {
                if(Arr2[iCnt] % 2 != 0)
                {
                    cout<<Arr2[iCnt]<<"\t";
                }
            }
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

    obj.Display(Arr,value1,Brr,value2);

    return 0;
}