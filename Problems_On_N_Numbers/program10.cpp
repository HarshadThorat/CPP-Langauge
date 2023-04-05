// Accept N numbers from user and return frequency of 11 form it. 
// input : N:    6
// Elements : 85   11 3 15 11 111                   85   66  3  15  93  88            
// output :    2                                     0


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

        int Frequency()
        {
            int iCnt = 0;
            int iFrequency = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] == 11)
                {
                    iFrequency++;
                }
            }
            return iFrequency;
        }    
};

int main()
{
    int iLength = 0;
    int iRet = 0;

    cout<<"Enter the number of elements you want : "<<"\n";
    cin>>iLength;

    ArrayX obj(iLength);

    obj.Accept();

    iRet = obj.Frequency();
    cout<<"Frequency of 11 is : "<<iRet;

    return 0;
}