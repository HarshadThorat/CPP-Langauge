// write a program wich checks whether 5th and 18th bit is ON or OFF?
//input : 257  
//output : true

//0000 0000 0000 0010 0000 0000 0001 0000
// 0     0    0    2    0    0    1     0
//0X00020010

#include<iostream>
using namespace std;
typedef unsigned int UINT;


class Bitwise
{
    public:
        bool CheckBit(UINT No)
        {
            UINT Mask = 0X00020010;
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
        cout<<"5th And 18th bit is ON\n";
    }
    else
    {
        cout<<"5th And 18th bit is OFF\n";
    }

    return 0;
}