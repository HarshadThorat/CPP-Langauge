// Accept N nmber from user and return the Smallst Number.
//input   N :  6
//        eletments : 85 66 3 66 93 88
// output :  3

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

        int Smallest()
        {
            int iCnt = 0;
            int iMin = Arr[0];
            
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] < iMin)
                {
                    iMin = Arr[iCnt];
                }
            }
            return iMin;
        }    
};

int main()
{
    int iRet = 0;

    ArrayX obj(6);

    obj.Accept();

    iRet = obj.Smallest();
    cout<<"Smallest number is : "<<iRet;

    return 0;
}