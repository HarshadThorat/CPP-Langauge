//write a program which display all elements which are Prime from SLLL.
//input : 11 -> 20 -> 17 -> 41 -> 22 -> 89
//output : 11   17   41   89

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

        int IsPrime(int No)
        {
            int iCnt = 0;
            int i = 0;

            for(iCnt = 1; iCnt <= No ; iCnt++)
            {
                if(No % iCnt == 0)
                {
                    i++;
                }
            }
            return i;
        }

        void Prime(int no)
        {
            int ret = 0;

            while(First != NULL)
            {
                ret = IsPrime(First->data);
                if(ret == 2)
                {
                    cout<<"Prime number is : "<<First->data<<"\n";
                }
                First = First->next;
            }
        }
};

int main()
{
    LinkedList obj;
    
    obj.InsertFirst(89);
    obj.InsertFirst(22);
    obj.InsertFirst(41);
    obj.InsertFirst(17);
    obj.InsertFirst(20);
    obj.InsertFirst(11);
    obj.Display();

    obj.Prime(11);

    return 0;
}
