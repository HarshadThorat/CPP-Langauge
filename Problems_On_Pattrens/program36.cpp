//write program which accept String from user and display below pattern?
// Input :  Hello
//  H e l l o
//  H e l l o
//  H e l l o
//  H e l l o
//  H e l l o



#include<iostream>
using namespace std;


class String
{
    public:
        void Display(char str[])    
        {
            int i = 0;
            int j = 0;  
            
            for(i = 0; i <= str[i]; i++)
            {
                for(j = 0; j <= str[j]; j++)
                {
                    cout<<str[j]<<"\t";
                }
                cout<<"\n";		
            }
        }
};


int main()
{
    char Arr[30];

    cout<<"Enter the String\n";
    cin.getline(Arr,30);

    String obj;

    obj.Display(Arr);

    return 0;

}