//write a program which search Last occurance of particular element fom SLLL.
// 10 -> 20 -> 30 -> 40 -> 50 -> 30 -> 70
// input : 30
//output : 6

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

        int LastOccurance(int no)
        {
            int iCnt = 1;
            int ipos = -1;

            while(First != NULL)
            {
                if(First->data == no)
                {
                    ipos = iCnt;
                }
                First = First->next;
                iCnt++;
            }
            return ipos;
        }
};

int main()
{
    LinkedList obj;

    obj.InsertFirst(70);
    obj.InsertFirst(30);
    obj.InsertFirst(50);
    obj.InsertFirst(40);
    obj.InsertFirst(30);
    obj.InsertFirst(20);
    obj.InsertFirst(10);
    obj.Display();

    int ret = obj.LastOccurance(30);
    cout<<"Element Occurs at Index : "<<ret<<"\n";

    return 0;
}
