//write a program which display product of all element from SLLL.
//input : 11 -> 20 -> 32 -> 41
//output : 1    2      6     4    

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

        int Product(int No)
        {
            int Mult = 1;
            int iDigit = 0;
            
            while(No != 0)
            {
                iDigit = No % 10;
                Mult = Mult * iDigit;
                No = No / 10;
            }
            return Mult;
        }
        
        void DisplayProduct(int no)
        {
            int ret = 0;

            while(First != NULL)
            {
                ret = Product(First->data);
                cout<<First->data<<" Product of the Digit is : "<<ret<<"\n";
                First = First->next;
            }
        }
};

int main()
{
    LinkedList obj;
    
    obj.InsertFirst(41);
    obj.InsertFirst(32);
    obj.InsertFirst(20);
    obj.InsertFirst(11);
    obj.Display();

    obj.DisplayProduct(11);
    
    return 0;
}
