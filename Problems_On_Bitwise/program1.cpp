// write a program wich checks whether 15th bit is ON or OFF?

//0000 0000 0000 0000 0100 0000 0000 0000
// 0     0    0    0    4    0   0     0
//0X00004000

#include<iostream>
using namespace std;
typedef unsigned int UINT;


class Bitwise
{
    public:
        bool CheckBit(UINT No)
        {
            UINT Mask = 0X00004000;
            UINT Result = 0;
            bool flag = false;

            Result = No & Mask;

            if(Result == Mask)
            {
                flag = true;
            }

            return flag; 
        }
};

int main()
{
    UINT value = 0;
    bool bret = false;

    cout<<"Enter the number\n";
    cin>>value;

    Bitwise obj;

    bret = obj.CheckBit(value);
    
    if(bret == true)
    {
        cout<<"15th bit is ON\n";
    }
    else
    {
        cout<<"15th bit is OFF\n";
    }

    return 0;
}