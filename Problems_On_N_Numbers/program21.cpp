// Accept N  nmber from user and Display summation of digits of each number.
//input   N :  6
//        eletments : 8225  665   3  76  953   858
// output :  17  17   3   13    17   21    
#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int size;

        ArrayX(int i)
        {
            size = i;
            Arr = new int[size];
        }
        ~ArrayX()
        {
            delete []Arr;
        }

        void Accept()
        {
            int iCnt = 0;

            for(iCnt = 0; iCnt < size; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void SumDigit()
        {
            int iCnt = 0;
            int sum = 0;
            int Digit = 0;

            for(iCnt = 0; iCnt < size; iCnt++)
            {
                while(Arr[iCnt] > 0)
                {
                    Digit = Arr[iCnt] % 10;
                    sum = sum + Digit;
                    Arr[iCnt] = Arr[iCnt] / 10; 
                }
                cout<<"Addition is : "<<sum<<"\n";
                sum = 0;
            }
        }
};

int main()
{
    int size = 0;

    cout<<"Enter the number of elements \n";
    cin>>size;

    ArrayX obj(size);

    obj.Accept();

    obj.SumDigit();

    return 0;
}