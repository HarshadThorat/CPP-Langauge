//write a program which return addition of all element from SLLL.
//input : 10 -> 20 -> 30 -> 40
//output : 100

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

        int Addition()
        {
            int iSum = 0;

            while(First != NULL)
            {
                iSum = iSum + First->data;
                First = First->next;
            }
            return iSum;
        }
};

int main()
{
    LinkedList obj;
    
    obj.InsertFirst(40);
    obj.InsertFirst(30);
    obj.InsertFirst(20);
    obj.InsertFirst(10);
    obj.Display();

    int ret = obj.Addition();
    cout<<"Addition of all nodes are : "<<ret<<"\n";

    return 0;
}
