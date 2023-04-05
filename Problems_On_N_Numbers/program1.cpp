//write java program which accept marks of N student from user and display class of each student
//Input : 67.3   45.8   88.9    77.5    55.2  
//Outut :   67.5   first class
//          45.8    pass class 
//          89.9    first class with distinction
//          77.5    first class with distinction
//          55.2    second class 


#include<iostream>
using namespace std;

class Number
{
    public:
        void Percentage(float Arr[], int size)
        {
            int iCnt = 0;
            
            printf("Marks are : \n"); 
            for(iCnt = 0; iCnt < size; iCnt++)
            {
                if(Arr[iCnt] < 35)
                {
                    cout<<"fail\n";    
                }
                if((Arr[iCnt] > 35) && (Arr[iCnt] < 50))
                {
                    cout<<"Pass class\n";    
                }
                if((Arr[iCnt] > 50) && (Arr[iCnt] < 60))
                {
                    cout<<"second Class\n";    
                }
                if((Arr[iCnt] > 60) && (Arr[iCnt] < 75))
                {
                    cout<<"fist Class\n";    
                }
                else if(Arr[iCnt] > 75)
                {
                    cout<<"First class with Distinction\n";    
                }
            }
        }
};


int main()
{
    int value1 = 0;
    float *Arr = NULL;
    int i = 0;
    
    cout<<"Enter the size of first array\n";
    cin>>value1;

    Arr = new float[value1];
    
    cout<<"Enter the elements\n";
    for(i = 0; i < value1; i++)
    {
        cin>>Arr[i];
    }

    Number obj;

    obj.Percentage(Arr,value1);
 
    return 0;
}