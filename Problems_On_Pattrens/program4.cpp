// Accept number from user and display below pattern
// input : 5
// output :  #   1  #   2   #   3   #   4   #   5  


#include<iostream>
using namespace std;


class Display
{
    public:
        int iNo;

        Display(int i)
        {
            iNo = i;
        }
};

class Marvellous : public Display
{
    public:
        Marvellous(int i) : Display(i)
        {}

        void Pattern()
        {
            int iCnt = 0;

            for(iCnt = 1; iCnt <= iNo; iCnt++)
            {
                cout<<"#"<<"\t"<<iCnt<<"\t";
            }
        }
};

int main()
{
    int iValue = 0;

    cout<<"Enter the number"<<"\n";
    cin>>iValue;
    
    Marvellous *obj = new Marvellous(iValue);

    obj->Pattern();

    return 0;
}