// write a program which accept number from user and Count the number of ON(1) bits in it without using % and / operator
//input : 11
//output : 3


#include<iostream>
using namespace std;
typedef unsigned int UINT;


class Bitwise
{
    public:
        UINT CountOne(UINT No)
        {
            UINT iCnt = 0;

            while(No)
            {
                iCnt++;
                No = No & (No-1); 
            }
            return iCnt;
        }
};

int main()
{
    UINT value = 0;
    UINT ret = 0;

    cout<<"Enter the number\n";
    cin>>value;

    Bitwise obj;

    ret = obj.CountOne(value);
    
    cout<<"Number of ON bits are : "<<ret<<"\n";

    return 0;
}