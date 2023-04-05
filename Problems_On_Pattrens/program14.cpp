// Accept number of Rows and number of Column from user and display below pattern
/* 
input : iRow = 4      iCol = 5
   
4   4  4   4  4
3   3  3   3  3
2   2  2   2  2
1   1  1   1   1

*/ 

#include<iostream>
using namespace std;


class Display
{
    public:
        int iRow;
        int iCol;

        Display(int i, int j)
        {
            iRow = i;
            iCol = j;
        }
};

class Marvellous : public Display
{
    public:
        Marvellous(int i,int j) : Display(i,j)
        {}

        void Pattern()
        {
            int i = 0;
            int j = 0;
   
            for(i = iRow; i >= 1; i--)
            { 
                for(j = 1; j <= iCol; j++)
                {
                    cout<<i<<"\t";
                } 
                cout<<"\n";           
            }
            
        }
};


int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    cout<<"Enter First number"<<"\n";
    cin>>iValue1;

    cout<<"Enter Second number"<<"\n";
    cin>>iValue2;

    Marvellous *obj = new Marvellous(iValue1, iValue2);

    obj->Pattern();

    return 0;
}
