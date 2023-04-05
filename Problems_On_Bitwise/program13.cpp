// write a program which accept number and position from user and ON that bit. return modified number.
//input : 10  3
//output : 14

//0000 0000 0000 0000 0000 0000 0000 0001
// 0     0    0    0    0    0   0     1
//0X00000001

#include<iostream>
using namespace std;
typedef unsigned int UINT;


class Bitwise
{
    public:
        UINT ONBit(UINT No, UINT Pos)
        {
            UINT Mask = 0X00000001;
            UINT Result = 0;

            Mask = Mask << (Pos-1);

            Result = No | Mask;

            return Result;
        }
};

int main()
{
    UINT value = 0;
    UINT pos = 0;
    UINT ret = 0;

    cout<<"Enter the number\n";
    cin>>value;

    cout<<"Enter the Position\n";
    cin>>pos;

    Bitwise obj;

    ret = obj.ONBit(value, pos);
    
    cout<<"Updated number is : "<<ret<<"\n";

    return 0;
}