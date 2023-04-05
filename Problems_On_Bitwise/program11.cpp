// write a program which accept number and position from user and check whether bit at that position is ON or OFF.
//input : 10  2
//output : true

//0000 0000 0000 0000 0000 0000 0000 0001
// 0     0    0    0    0    0   0     1
//0X00000001

#include<iostream>
using namespace std;
typedef unsigned int UINT;


class Bitwise
{
    public:
        bool CheckBit(UINT No, UINT Pos)
        {
            UINT Mask = 0X00000001;
            UINT Result = 0;

            Mask = Mask << (Pos-1);

            Result = No & Mask;

            if(Result == Mask)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};

int main()
{
    UINT value = 0;
    UINT pos = 0;
    bool bret = false;

    cout<<"Enter the number\n";
    cin>>value;

    cout<<"Enter the Position\n";
    cin>>pos;

    Bitwise obj;

    bret = obj.CheckBit(value, pos);
    
    if(bret == true)
    {
        cout<<"Bit is ON\n";
    }
    else
    {
        cout<<"Bit is OFF\n";
    }

    return 0;
}