// Write a program which accept Three number from user and print its Multiplication.
// input = 5   4   7
// output = 140


#include<iostream>
using namespace std;

class Numbers
{
    public:
        int iNo1;
        int iNo2;
        int iNo3;

        Numbers(int A,int B,int C)
        {
            iNo1 = A;
            iNo2 = B;
            iNo3 = C;
        }

};

class Marvellous : public Numbers
{
    public:
        Marvellous(int A,int B,int C) : Numbers(A,B,C)
        {}

        int Multiply()
        {
            int iAns = 0;
                
            if(iNo1 == 0)
            {
                iAns = iNo2 * iNo3;
                return iAns;
            } 
            if(iNo2 == 0)
            {
                iAns = iNo1 * iNo3;
                return iAns;
            }
            if(iNo3 == 0)
            {
                iAns = iNo2 * iNo3;
                return iAns;
            }
            else
            {
                iAns = iNo1 * iNo2 * iNo3;
            }

            return iAns; 
        }

};

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    int iRet = 0;

    cout<<"Enter First number : \n";
    cin>>iValue1;
    
    cout<<"Enter Second number : \n";
    cin>>iValue2;
    
    cout<<"Enter Third number : \n";
    cin>>iValue3;

    Marvellous *obj = new Marvellous(iValue1,iValue2,iValue3);

    iRet = obj->Multiply();
    cout<<"Multiplication is : "<<iRet;

    delete obj;
    
    return 0;
}
