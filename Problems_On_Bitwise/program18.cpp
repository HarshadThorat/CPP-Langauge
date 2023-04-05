// write a program which accept one number, two position from user and check whether bit at first or bit at second positon is ON or OFF?
//input : 10  3  7  
//output : true

//0000 0000 0000 0000 0000 0000 0000 0000
// 0     0    0    0    0    0    0     0
//0X00000000

#include<iostream>
using namespace std;
typedef unsigned int UINT;


class Bitwise
{
    public:
        bool CheckBit(UINT No, UINT Pos1, UINT Pos2)
        {
            UINT Mask1 = 0X00000001;
            UINT Mask2 = 0X00000001;
            UINT Result = 0;
            UINT Mask = 0;

            Mask1 = Mask1 << (Pos1-1);
            Mask2 = Mask2 << (Pos2-1);
            Mask = Mask1 | Mask2;
            
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
    bool bret = false;
    UINT pos1 = 0;
    UINT pos2 = 0;

    cout<<"Enter the number\n";
    cin>>value;

    cout<<"Enter the first position\n";
    cin>>pos1;

    cout<<"Enter the second position\n";
    cin>>pos2;

    Bitwise obj;

    bret = obj.CheckBit(value, pos1, pos2);
    
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