//write a program which return Largest element from SLLL.
//input : 110 -> 230 -> 320 -> 240
//output : 320

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

        int Maximum()
        {
            int iMax = First->data;

            while(First != NULL)
            {
                if(First->data > iMax)
                {
                    iMax = First->data;
                }
                First = First->next;
            }
            return iMax;
        }
};

int main()
{
    LinkedList obj;
    
    obj.InsertFirst(240);
    obj.InsertFirst(320);
    obj.InsertFirst(230);
    obj.InsertFirst(110);
    obj.Display();

    int ret = obj.Maximum();
    cout<<"Maximum nodes is : "<<ret<<"\n";

    return 0;
}
