//write program which accept String from user and display below pattern?
// Input :  Hello
// H e l l o
// H e l l 
// H e l 
// H e 
// H      
// H  e
// H  e  l 
// H  e  l  l  
// H  e  l  l  o


#include<iostream>
#include<string.h>
using namespace std;


class String
{
    public:
        void Display(char str[])    
        {
            int i = 0;
            int j = 0; 
            int len = strlen(str);
            
            for(i = 0; i < len; i++)
            {
                for(j = 0; j < len-i; j++)
                {
                    cout<<str[j]<<"\t";
                }
                cout<<"\n";		
            }

            for(i = 2; i <= len; i++)
            {
                for(j = 0; j < i; j++)
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