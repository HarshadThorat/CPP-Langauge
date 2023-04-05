//write a program which search first occurance of particular element fom SLLL.
// 10 -> 20 -> 30 -> 40 -> 50 -> 30 -> 70
// input : 30
//output : 3

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

        int FirstOccurance(int no)
        {
            int iCnt = 1;

            while(First != NULL)
            {
                if(First->data == no)
                {
                    iCnt;
                    break;
                }
                First = First->next;
                iCnt++;
            }
            return iCnt;
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

    int ret = obj.FirstOccurance(30);
    cout<<"Element Occurs at Index : "<<ret<<"\n";

    return 0;
}
