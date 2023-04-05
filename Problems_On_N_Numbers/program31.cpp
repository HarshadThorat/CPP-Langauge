// Accept N nmber from user and return product of all Odd numbers
//input   N :  6
//        eletments : 15 66 3 70 10 88
// output : 45  (15 * 3)


#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int OddProduct(int Arr[], int Size)
        {
            int iCnt = 0;
            int Mult = 1;

            for(iCnt = 0; iCnt < Size; iCnt++)
            {
                if(Arr[iCnt] % 2 != 0)
                {
                    Mult = Mult * Arr[iCnt];
                }
            }
            return Mult;
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

    ArrayX obj;

    ret = obj.OddProduct(Arr,size);
    cout<<"Product of the odd Number is : "<<ret<<"\n";

    return 0;
}