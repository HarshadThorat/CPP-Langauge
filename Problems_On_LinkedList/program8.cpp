//write a program which return addition of all Even elements from SLLL.
//input : 11 -> 20 -> 32 -> 41
//output : 52

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

        
        int EvenAddition()
        {
            int Sum = 0;

            while(First != NULL)
            {
                if(First->data % 2 == 0)
                {
                    Sum = Sum + First->data;
                }    
                First = First->next;
            }
            return Sum;
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

    int ret = obj.EvenAddition();
    cout<<"Addition of all Even nodes are : "<<ret<<"\n";

    return 0;
}
