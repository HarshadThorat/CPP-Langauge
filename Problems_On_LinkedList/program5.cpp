//write a program which return Smallest element from SLLL.
//input : 110 -> 230 -> 20 -> 320 -> 240
//output : 20

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

        int Minimum()
        {
            int iMin = First->data;

            while(First != NULL)
            {
                if(First->data < iMin)
                {
                    iMin = First->data;
                }
                First = First->next;
            }
            return iMin;
        }
};

int main()
{
    LinkedList obj;
    
    obj.InsertFirst(240);
    obj.InsertFirst(320);
    obj.InsertFirst(20);
    obj.InsertFirst(230);
    obj.InsertFirst(110);
    obj.Display();

    int ret = obj.Minimum();
    cout<<"Minimum nodes is : "<<ret<<"\n";

    return 0;
}
