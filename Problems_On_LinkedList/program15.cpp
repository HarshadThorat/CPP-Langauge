//write a program which display Largeest digit of all element from SLLL.
//input : 11 -> 250 -> 532 -> 419
//output : 1     5      5      9    


#include<iostream>
using namespace std;
#pragma pack(1)

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE; 
typedef struct node ** PPNODE;

class LinkedList
{
    public:
        PNODE First;
        
        LinkedList()
        {
            First = NULL;
        }
        
        void InsertFirst(int no)
        {
            PNODE newn = new NODE;

            newn->data = no;
            newn->next = NULL;

            if(First == NULL)
            {
                First = newn;
            }
            else
            {
                newn->next = First;
                First = newn;
            }
        }

        void Display()
        {
            cout<<"Elements of the Linked List are : "<<"\n";
            PNODE temp = First;

            while(temp != NULL)
            {
                cout<<" | "<<temp->data<<" |-> ";
                temp = temp->next;
            }
            cout<<"NULL\n";
        }

        int LargestDigit(int No)
        {
            int Max = 0;
            int iDigit = 0;
            
            while(No != 0)
            {
                iDigit = No % 10;
                if(iDigit > Max)
                {
                    Max = iDigit;
                }
                No = No / 10;
            }
            return Max;
        }
        
        void DisplayLargestDigit(int no)
        {
            int ret = 0;

            while(First != NULL)
            {
                ret = LargestDigit(First->data);
                cout<<First->data<<" Largest Digit is : "<<ret<<"\n";
                First = First->next;
            }
        }
};

int main()
{
    LinkedList obj;
    
    obj.InsertFirst(419);
    obj.InsertFirst(532);
    obj.InsertFirst(250);
    obj.InsertFirst(11);
    obj.Display();

    obj.DisplayLargestDigit(11);
    
    return 0;
}
