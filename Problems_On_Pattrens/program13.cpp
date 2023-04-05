// Accept number of Rows and number of Column from user and display below pattern
/* 
input : iRow = 4      iCol = 4
   
A   B   C   D
a   b   c   d
A   B   C   D
a   b   c   d

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
            char ch1 = 'A';
            char ch2 = 'a';

            for(i = 1; i <= iRow; i++)
            { 
                for(j = 1; j <= iCol; j++)
                {
                    if(i % 2 != 0)
                    {
                        cout<<ch1<<"\t";
                        ch1++;
                    }
                    else
                    {
                        cout<<ch2<<"\t";
                        ch2++;
                    }   
                }
                cout<<"\n";
                ch1 = 'A';
                ch2 = 'a';
                
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
