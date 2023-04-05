// Accept N numbers from user and accept one another number as NO,  return frequency of NO form it. 
// input : N:    6
//  NO : 66
// Elements : 85  66  3   66  93  88                   85   11  3  15  11  111            
// output :    2                                       0


#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;
        int iNo;

        ArrayX(int i, int j)
        {
            iSize = i;
            iNo = j;
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
                if(Arr[iCnt] == iNo)
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
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number of elements you want : "<<"\n";
    cin>>iLength;

    cout<<"Enter the number you have to find"<<"\n";
    cin>>iValue;

    ArrayX obj(iLength, iValue);

    obj.Accept();

    iRet = obj.Frequency();
    cout<<"Frequency of  is : "<<iRet;

    return 0;
}