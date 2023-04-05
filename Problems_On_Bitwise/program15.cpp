// write a program which accept number and position from user and Toggle Contents of first and last nibble of the number .return modified number.


//0000 0000 0000 0000 0000 0000 0000 1001
// 0     0    0    0    0    0   0     9
//0X00000009

#include<iostream>
using namespace std;
typedef unsigned int UINT;


class Bitwise
{
    public:
        UINT ToggleBit(UINT No)
        {
            UINT Mask = 0X00000009;
            UINT Result = 0;

            Result = No ^ Mask;

            return Result;
        }
};

int main()
{
    UINT value = 0;
    UINT ret = 0;

    cout<<"Enter the number\n";
    cin>>value;

    Bitwise obj;

    ret = obj.ToggleBit(value);
    
    cout<<"Updated number is : "<<ret<<"\n";

    return 0;
}