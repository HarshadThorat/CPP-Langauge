// write a program which accept number from user and ON its first 4 bit .return modified number
//input : 73
//output : 79

//0000 0000 0000 0000 0000 0000 0000 1111
// 0     0    0    0    0    0   0     f
//0X0000000f

#include<iostream>
using namespace std;
typedef unsigned int UINT;

class Bitwise
{
    public:
        UINT ToggleBit(UINT No)
        {
            UINT Mask = 0X0000000f;
            UINT Result = 0;
           
            Result = No | Mask;

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