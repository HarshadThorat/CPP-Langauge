// Accept N nmber from user and accept one another number as NO,return index of first occurance of that NO.
//input   N :  6
//        NO : 66
//        eletments : 85 66 3 66 93 88
// output : 1

#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int FirstOccurance(int Arr[], int Size, int No)
        {
            int iCnt = 0;
            int ipos = -1;

            for(iCnt = 0; iCnt < Size; iCnt++)
            {
                if(Arr[iCnt] == No)
                {
                    ipos = iCnt;
                    break;
                }
            }

            if(ipos == -1)
            {
                return -1;
            }
            else
            {
                return ipos;
            }
            
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

    ret = obj.FirstOccurance(Arr,size,value);
    if(ret == -1)
    {
        cout<<"Number is Not Occur";
        
    }
    else
    {
        cout<<"Number is Occurs at Index : "<<ret<<"\n";
    }
    return 0;
}