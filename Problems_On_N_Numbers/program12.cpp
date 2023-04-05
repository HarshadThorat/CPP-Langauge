// Accept N nmber from user and accept one another number as NO,check Whether No is present or not.
//input   N :  6
//        NO : 66
//        eletments : 85 66 3 66 93 88
// output : Present


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

        int Check()
        {
            int iCnt = 0;
            int iFrequency = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] == iNo)
                {
                    iFrequency++;;
                }
            }
            if(iFrequency == 0)
                {
                    return false;
                }
                else 
                {
                    return true;
                }
        }    
};

int main()
{
    int iLength = 0;
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter the number of elements you want : "<<"\n";
    cin>>iLength;

    cout<<"Enter the number you have to find"<<"\n";
    cin>>iValue;

    ArrayX obj(iLength, iValue);

    obj.Accept();

    bRet = obj.Check();
    if(bRet == true)
    {
        cout<<"Number is present"<<"\n";
    }
    else
    {
        cout<<"Number is not present"<<"\n";
    }

    return 0;
}