// write a program which accept number from user and OFF 7th bit of that number if it is on,return modified number

//1111 1111  1111 1111 1111 1111 1011 1111 
// f     f     f    f    f    f   B    f
//0XffffffBf

#include<iostream>
using namespace std;
typedef unsigned int UINT;


class Bitwise
{
    public:
        UINT OFFBit(UINT No)
        {
            UINT Mask = 0XffffffBf;
            UINT Result = 0;
           
            Result = No & Mask;

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

    ret = obj.OFFBit(value);
    
   cout<<"Updated number is : "<<ret<<"\n";

    return 0;
}