//write program which accept number of rows and columns from user and display below pattern?
// Input :  iRow = 3   iCol = 4
//  * # * #
//  * # * #  
//  * # * #
//  * # * #
 

#include<iostream>
using namespace std;


class Pattern
{
    public:
        void Display(int Row, int Col)    
        {
            int i = 0;
            int j = 0;  
            
            for(i = 1; i <= Row; i++)
            {
                for(j = 1; j <= Col; j++)
                {
                    if(j % 2 != 0)
                    {
                        cout<<"*\t";
                    }
                    else
                    {
                        cout<<"#\t";
                    }
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