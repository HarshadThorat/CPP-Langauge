// write a program wich checks whether 7th,15th,21th,28th bit is ON or OFF?

//0000 1000 0001 0000 0100 0000 0100 0000
// 0     8    1    0    4    0   4     0
//0X08104040

#include<iostream>
using namespace std;
typedef unsigned int UINT;


class Bitwise
{
    public:
        bool CheckBit(UINT No)
        {
            UINT Mask = 0X08104040;
            UINT Result = 0;
           
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

    cout<<"Enter the number\n";
    cin>>value;

    Bitwise obj;

    bret = obj.CheckBit(value);
    
    if(bret == true)
    {
        cout<<"7th,15th,21th,28th bit is ON\n";
    }
    else
    {
        cout<<"7th,15th,21th,28th bit is OFF\n";
    }

    return 0;
}