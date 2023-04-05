// Accept N nmber from user and accept range . Display all elments from that range.
//input   N :  6
//        start : 60
//        end    : 90  
//        eletments : 85 66 3 66 93 88
// output : 66 85 88


#include<iostream>
using namespace std;

class ArrayX
{
    public:
        void DisplayRange(int Arr[], int Size, int start, int end)
        {
            int iCnt = 0;

            cout<<"Number betweenn the given Range\n";
            for(iCnt = 0; iCnt < Size; iCnt++)
            {
                if((Arr[iCnt] > start) && (Arr[iCnt] < end))
                {
                    cout<<Arr[iCnt]<<"\t";
                }
            }
        }
      
};

int main()
{
    int ret = 0;
    int size = 0;
    int iCnt = 0;
    int *Arr = NULL;
    int value1 = 0;
    int value2 = 0;

    cout<<"Enter the size of array\n";
    cin>>size;

    Arr = new int[size];

    cout<<"Enter the elements : "<<"\n";
    
    for(iCnt = 0; iCnt < size; iCnt++)
    {
        cin>>Arr[iCnt];
    }

    cout<<"Enter the start point\n";
    cin>>value1;

    cout<<"Enter the end point\n";
    cin>>value2;

    ArrayX obj;

    obj.DisplayRange(Arr,size,value1,value2);
    
    return 0;
}