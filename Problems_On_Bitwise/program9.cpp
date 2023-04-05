// write a program which accept number from user and Toggle 7th and 10th bit of that number if it is on,return modified number
//input : 137
//output : 713

//0000 0000 0000 0000 0000 0010 0100 0000
// 0     0    0    0    0    2   4     0
//0X00000240

#include<iostream>
using namespace std;
typedef unsigned int UINT;

class Bitwise
{
    public:
        UINT ToggleBit(UINT No)
        {
            UINT Mask = 0X00000240;
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