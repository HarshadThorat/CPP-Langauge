//write program which accept  arrays of character from user and replace each capital character with its corresponding small character 
//Input :  b  N   j  B  R  b  A  d  G   G
//Outut :  b  n   j  b  r  b  a  d  g   g
//          

#include<iostream>
using namespace std;


class String
{
    public:
        void LowerCase(char Arr[], int size)
        {
            int iCnt = 0;
            
            for(iCnt = 0; iCnt < size; iCnt++)
            {
                if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
                {
                        Arr[iCnt] = Arr[iCnt] + 32;
                }
                cout<<Arr[iCnt]<<"\t";
            }
        }
     
};


int main()
{
    int value1 = 0;
    char *Arr = NULL;
    int i = 0;
    int ret = 0;
    
    cout<<"Enter the size of first array\n";
    cin>>value1;

    Arr = new char[value1];
    
    cout<<"Enter the character of array\n";
    for(i = 0; i < value1; i++)
    {
        cin>>Arr[i];
    }

    String obj;

    obj.LowerCase(Arr,value1);
    
    return 0;
}