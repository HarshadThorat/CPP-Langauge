//write a program ehich accept one number from user and range of position from user Toggle all bits from that range. 
//Input = 897   9  13


#include<iostream>
using namespace std;
typedef unsigned int UINT;


class Bitwise
{
    public:
        UINT ToggleRange(UINT No, UINT start, UINT End)
        {
            UINT Mask1 = 0XFFFFFFFF, Mask2 = 0XFFFFFFFF, Mask = 0, Result = 0;

            Mask1 = Mask1 << (start - 1);
            Mask2 = Mask2 >> (32 - End);
            Mask = Mask1 & Mask2;

            Result = No ^ Mask;

            return Result;
        }   
};

int main()
{
    UINT value = 0;
    UINT ret = 0;
    UINT Start = 0;
    UINT End = 0;

    cout<<"Enter the number\n";
    cin>>value;

    cout<<"Enter the staring position\n";
    cin>>Start;

    cout<<"Enter the Ending position\n";
    cin>>End;

    Bitwise obj;

    ret = obj.ToggleRange(value, Start, End);
    
    cout<<"Updated number is : "<<ret<<"\n";

    return 0;
}