//write java program which accept two arrays from user and copy the content of that array into another array and check array is pallindrome or not
//Input : 12  57  28  3 
//        99 23  54 58 6 67 

//Outut :  12  57  28  3 99 23  54 58 6 67
//          Array not pallindrome
 
               
#include<iostream>
using namespace std;


class Number
{
    public:
        bool ArrayPallindrome(int Arr1[], int size1, int Arr2[], int size2)
        {
            int length = size1 + size2;
            int *Arr3 = (int *)malloc(sizeof(int) * length);
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

            int start = 0;
            int end = length-1;
            bool flag = true;

            while(start < end)
            {
                if(Arr3[start] != Arr3[end])
                {
                    flag = false;
                    break;
                }

                start++;
                end--;
            }
            return flag;
        }
};


int main()
{
    int value1 = 0;
    int value2 = 0;
    int *Arr = NULL;
    int *Brr = NULL;
    int i = 0;
    int ret = false;

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

    ret = obj.ArrayPallindrome(Arr,value1,Brr,value2);
    if(ret == true)
    {
        cout<<"\nArray is Pallindrome\n";
    }
    else
    {
        cout<<"\nArray is NOT Pallindrome\n";
    }

    return 0;
}