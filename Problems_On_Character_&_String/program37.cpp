//write  program which accept  arrays of character from user and return the difference between of capital and frequency of small character
//Input :  b  N   e  B  R  b  A  I  O   G  i
//Outut :  3  (7-4)
//          


#include<iostream>
using namespace std;


class String
{
    public:
        int Difference(char Arr[], int size)
        {
            int iCnt = 0;
            int iCntCap = 0;
            int iCntSml = 0;

            for(iCnt = 0; iCnt < size; iCnt++)
            {
                if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z')) 
                {
                    iCntCap++;
                }
                else
                {
                    iCntSml++;
                }
            }    
            return (iCntCap - iCntSml);
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

    ret = obj.Difference(Arr,value1);
    cout<<"Difference of capital and small character are : "<<ret;
    return 0;
}