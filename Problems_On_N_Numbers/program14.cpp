// Accept N nmber from user and accept one another number as NO,return index of Last occurance of that NO.
//input   N :  6
//        NO : 66
//        eletments : 85 66 3 66 93 88
// output : 3


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

        int LastOccurance()
        {
            int iCnt = 0;
            
            for(iCnt = iSize-1; iCnt >= 0 ; iCnt--)
            {
                if(Arr[iCnt] == iNo)
                {
                    break;
                }
            }

            if(iCnt == iSize)
                {
                    return -1;
                }
                else 
                {
                    return iCnt;
                }
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

    iRet = obj.LastOccurance();
    if(iRet == -1)
    {
        cout<<"There is no such number"<<"\n";
    }
    else
    {
        cout<<"Last Occurance of the number is "<<iRet<<"\n";
    }

    return 0;
}