// Accept single digit number from user and print it into word
// Input: 7 
// Output: Seven

#include<iostream>
using namespace std;

class Numbers
{
    public:
        int iNo;

        Numbers(int A)
        {
            iNo = A;
        }

        void Display()
        {
            if(iNo == 0)
            {
                printf("Zero");
            }    
            else if(iNo == 1)
            {
                printf("One");
            }
            else if(iNo == 2)
            {
                printf("Two");
            }   
            else if(iNo == 3)
            {
                printf("Three");
            }
            else if(iNo == 4)
            {
                printf("Four");
            }
            else if(iNo == 5)
            {
                printf("Five");
            }
            else if(iNo == 6)
            {
                printf("Six");
            }
            else if(iNo == 7)
            {
                printf("Seven");
            }
            else if(iNo == 8)
            {
                printf("Eight");
            }
            else if(iNo == 9)
            {
                printf("Nine");
            }
            else
            {
                printf("Invalid Number");
            }
        }
};

int main()
{
    int iValue = 0;

    cout<<"Enter the number \n";
    cin>>iValue;

    Numbers obj(iValue);

    obj.Display();

    return 0;
}