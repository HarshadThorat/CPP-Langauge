// Accept N  number from user and Display all such number which contain 3 digits in it.
//input   N :  6
//        eletments : 8225  665   3  76  953   858
// output :  665   935  858 

#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int i)
        {
            iSize = i;
            Arr = new int[iSize];
        }
        ~ArrayX()
        {
            delete []Arr;
        }
        void Accept()
        {
            cout<<"Enter the elements : "<<"\n";
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Digit()
        {
            int iCnt = 0;
            
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if((Arr[iCnt] >= 100)  && (Arr[iCnt] < 1000)) 
                {
                    cout<<Arr[iCnt]<<"\t";
                }
            }

        }    
};

int main()
{
    int iLength = 0;
   
    cout<<"Enter the number of elements you want : "<<"\n";
    cin>>iLength;

    ArrayX obj(iLength);

    obj.Accept();

    obj.Digit();
 
    return 0;
}