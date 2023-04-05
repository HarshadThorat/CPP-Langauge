//write java program which accept two arrays from user and form new array which is combination of first and second array
//Input : 12  57  28  3 
//        99 23  54 58 6 67 

//Outut : 12  57  28  3 99 23  54 58 6 67
//          


#include<iostream>
using namespace std;


class Number
{
    public:
        void Display(int Arr1[], int size1, int Arr2[], int size2)
        {
            int length = size1 + size2;
            int *Arr3 = new int[length];
            int iCnt = 0;

            for(iCnt = 0; iCnt < size1; iCnt++)
            {
                Arr3[iCnt] = Arr1[iCnt];
            }
            for(iCnt = 0; iCnt < size2; iCnt++)
            {
                Arr3[iCnt + size1] = Arr2[iCnt];
            }

            cout<<"Elements in the NEW ARRAY\n";
            for(iCnt = 0; iCnt < length; iCnt++)
            {
                cout<<Arr3[iCnt]<<"\t";
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