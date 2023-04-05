//write a program which reverse each element from SLLL.
//input : 11 -> 28 -> 17 -> 41 -> 6 -> 89
//output : 11   82    71    14    6    98

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

        int Reverse(int no)
        {
            int Rev = 0;
            int iDigit = 0;

            while(no != 0)
            {
                iDigit = no % 10;
                Rev = (Rev * 10) + iDigit;
                no = no / 10;
            }
            return Rev;
        }
        
        void DisplayReverse(int no)
        {
            int ret = 0;

            while(First != NULL)
            {
                ret = Reverse(First->data);
                cout<<"Reverse Digit "<<First->data<<" is "<<ret<<"\n";
                First = First->next;
            }
        }
};

int main()
{
    LinkedList obj;
    
    obj.InsertFirst(89);
    obj.InsertFirst(6);
    obj.InsertFirst(41);
    obj.InsertFirst(17);
    obj.InsertFirst(28);
    obj.InsertFirst(11);
    obj.Display();

    obj.DisplayReverse(11);
    
    return 0;
}
