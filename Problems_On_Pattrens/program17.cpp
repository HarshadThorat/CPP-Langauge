// Accept number of Rows and number of Column from user and display below pattern
/* 
input : iRow = 4      iCol = 5
   
2   4    6    8    10
1   3    5    7    9
2   4    6    8    10
1   3    5    7    9

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
            int No = 1;
   
            for(i = 1; i <= iRow; i++)
            { 
                for(j = 1; j <= iCol; j++)
                {
                    if(i % 2 != 0)
                    {
                        cout<<2*j<<"\t";
                    }
                    else
                    {
                        cout<<(2*j)-1<<"\t";
                    }
                    
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
