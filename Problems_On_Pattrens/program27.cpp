//write program which accept number of rows and columns from user and display below pattern?
// Input :  iRow = 4   iCol = 4
//  A B C D
//  a b c d  
//  A B C D
//  a b c d


#include<iostream>
using namespace std;


class Pattern
{
    public:
        void Display(int Row, int Col)    
        {
            int i = 0;
            int j = 0;  
            char ch1 = 'A';
            char ch2 = 'a';

            for(i = 1; i <= Row; i++)
            {
                for(j = 1; j <= Col; j++)
                {
                    if(i % 2 != 0)
                    {
                        cout<<ch1<<"\t";
                        ch1++;
                    }
                    else
                    {
                        cout<<ch1<<"\t";
                        ch2++;
                    }
                }
                cout<<"\n";;
                ch1 = 'A';
                ch2 = 'a';		
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