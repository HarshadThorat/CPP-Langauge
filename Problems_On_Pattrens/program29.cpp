//write program which accept number of rows and columns from user and display below pattern?
// Input :  iRow = 4   iCol = 4
//  4 4 4 4 4
//  3 3 3 3 3  
//  2 2 2 2 2
//  1 1 1 1 1


#include<iostream>
using namespace std;


class Pattern
{
    public:
        void Display(int Row, int Col)    
        {
            int i = 0;
            int j = 0;  

            for(i = Row; i > 0; i--)
            {
                for(j = 1; j <= Col; j++)
                {
                    cout<<i<<"\t";
                }
                cout<<"\n";		
            }
        }
};


int main()
{
    int No1 = 0;
    int No2 = 0;

    cout<<"Enter the number of Row\n";
    cin>>No1;

    cout<<"Enter the number of Column\n";
    cin>>No2;

    Pattern obj;

    obj.Display(No1, No2);

    return 0;

}