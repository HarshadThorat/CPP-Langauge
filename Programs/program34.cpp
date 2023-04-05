// write a program which accept number from user and display below pattern.
// input : 5
// output : *  *  *  *  * #  #  #  #  # 


#include<iostream>
using namespace std;

class Numbers
{
    public:
        int iNo;

        Numbers(int A)
        {
            iNo = A;
        }

        void DisplayTable()
        {
            int iCnt = 0;

            for(iCnt = 1; iCnt <= iNo ; iCnt++)
            {
                cout<<"*"<<"\t";
            }

            for(iCnt = 1; iCnt <= iNo ; iCnt++)
            {
                cout<<"#"<<"\t";
            }
        }       
};

int main()
{
    int iValue = 0;

    cout<<"Enter the number \n";
    cin>>iValue;

    Numbers obj(iValue);

    obj.DisplayTable();
    
    return 0;
}