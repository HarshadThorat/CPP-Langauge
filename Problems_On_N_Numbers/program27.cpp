// write a program which Accept N number from user and accept one another number as NO,check Whether No is present or not.
//input   N :  6
//        NO : 66
//        eletments : 85 66 3 66 93 88
// output : Present


#include<iostream>
using namespace std;

class ArrayX
{
    public:
        bool Check(int Arr[], int Size, int No)
        {
            int iCnt = 0;
            bool flag = false;
            
            for(iCnt = 0; iCnt < Size; iCnt++)
            {
                if(Arr[iCnt] == No)
                {
                    flag = true;
                }
            }
            return flag;
        }
      
};

int main()
{
    int ret = 0;
    int size = 0;
    int iCnt = 0;
    int *Arr = NULL;
    int value = 0;

    cout<<"Enter the size of array\n";
    cin>>size;

    Arr = new int[size];

    cout<<"Enter the elements : "<<"\n";
    
    for(iCnt = 0; iCnt < size; iCnt++)
    {
        cin>>Arr[iCnt];
    }

    cout<<"Enter the number you have to find\n";
    cin>>value;

    ArrayX obj;

    ret = obj.Check(Arr,size,value);
    if(ret == true)
    {
        cout<<"Number is present\n";
    }
    else
    {
        cout<<"Number is Not present\n";
    }

    return 0;
}