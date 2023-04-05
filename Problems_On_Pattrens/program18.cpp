// Accept number of Rows and number of Column from user and display below pattern
/* 
input : iRow = 4      iCol = 5
   
2   4    6    8    10
A   B    C    D    E
2   4    6    8    10
A   B    C    D    E

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
            int No = 1;
            char ch = 'a';
   
            for(i = 1; i <= iRow; i++)
            { 
                for(j = 1; j <= iCol; j++)
                {
                    if(i % 2 != 0)
                    {
                        cout<<j<<"\t";
                    }
                    else
                    {
                        cout<<ch<<"\t";
                        ch++;
                    }
                    
                } 
                cout<<"\n";  
                ch = 'a';         
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
