// Accept number of Rows and number of Column from user and display below pattern
/* 
input : iRow = 3      iCol = 5
   
5  4  3   2   1
5  4  3   2   1
5  4  3   2   1

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

        void Pattern()
        {
            int i = 0;
            int j = 0;

            for(i = 1; i <= iRow; i++)
            {
                for(j = iCol; j >= 1; j--)
                {
                    cout<<j<<"\t";
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

    Display obj(iValue1, iValue2);

    obj.Pattern();

    return 0;
}
