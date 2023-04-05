//write a program which display all Pallindrome element from SLLL.
//input : 11 -> 28 -> 17 -> 414 -> 6 -> 89
//output : 11   6   414

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

        int Pallindrome(int no)
        {
            int Rev = 0;
            int iDigit = 0;
            int temp = no;

            while(no != 0)
            {
                iDigit = no % 10;
                Rev = (Rev * 10) + iDigit;
                no = no / 10;
            }
            return (temp == Rev);
        }
        
        bool DisplayPallindrome(int no)
        {
            bool ret = false;

            while(First != NULL)
            {
                ret = Pallindrome(First->data);
                if(ret == true)
                {
                    cout<<"Pallindrome Digit : "<<First->data<<"\n";
                }
                First = First->next;
            }
        }
};

int main()
{
    LinkedList obj;
    
    obj.InsertFirst(89);
    obj.InsertFirst(6);
    obj.InsertFirst(414);
    obj.InsertFirst(17);
    obj.InsertFirst(28);
    obj.InsertFirst(11);
    obj.Display();

    obj.DisplayPallindrome(11);
    
    return 0;
}
