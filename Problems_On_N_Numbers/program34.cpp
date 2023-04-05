//write program which accept  arrays of character from user and count number of capital character 
//Input :  b  N   j  B  R  b  A  d  G   G
//Outut :  6
//          


#include<iostream>
using namespace std;


class String
{
    public:
        int CountCapital(char Arr[], int size)
        {
            int iCnt = 0;
            int i = 0;
            
            for(iCnt = 0; iCnt < size; iCnt++)
            {
            if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                    i++;
            }
            }
            return i;
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

    ret = obj.CountCapital(Arr,value1);
    cout<<"Number of capital character are : "<<ret<<"\t";

    return 0;
}