//write program which accept  arrays of character from user and replace each small character with its corresponding capital character 
//Input :  b  N   j  B  R  b  A  d  G   G
//Outut :  B  N   J  B  R  B  A  D  G   G
           

#include<iostream>
using namespace std;


class String
{
    public:
        int CheckOccurance(char Arr[], int size, char ch)
        {
            int iCnt = 0;
            int ipos = -1;

            for(iCnt = 0; iCnt < size; iCnt++)
            {
                if(Arr[iCnt] == ch)
                {
                    ipos = iCnt;
                    break;
                }
            }    

            if(ipos == -1)
            {
                return -1;
            }    
            else
            {
                return ipos;
            }
        }     
};


int main()
{
    int value1 = 0;
    char *Arr = NULL;
    int i = 0;
    int ret = 0;
    char CH = '\0';

    cout<<"Enter the size of first array\n";
    cin>>value1;

    Arr = new char[value1];
    
    cout<<"Enter the character of array\n";
    for(i = 0; i < value1; i++)
    {
        cin>> Arr[i];
    }
    
    cout<<"Enter the character you have to find\n";
    cin>> CH;

    String obj;

    ret = obj.CheckOccurance(Arr,value1,CH);
    if(ret == -1)
    {
        cout<<"Character not present in array\n";
    }
    else
    {
        cout<<"Character present in array at Index : "<<ret<<"\n";
    }
    
    return 0;
}