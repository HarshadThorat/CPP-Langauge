//write a program which display addition of digit of element from SLLL.
//input : 110 -> 230 -> 20 -> 240 -> 640
//output : 2      5      2     6      10


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

        int SumDigit(int no)
        {
            int Sum = 0;
            int iDigit = 0;

            while(no != 0)
            {
                iDigit = no % 10;
                Sum = Sum + iDigit;
                no = no / 10;
            }
            return Sum;
        }
        
        void DisplayDigitSum(int no)
        {
            int ret = 0;

            while(First != NULL)
            {
                ret = SumDigit(First->data);
                cout<<"Addition of Digit of number "<<First->data<<" is "<<ret<<"\n";
                First = First->next;
            }
        }
};

int main()
{
    LinkedList obj;
    
    obj.InsertFirst(640);
    obj.InsertFirst(240);
    obj.InsertFirst(20);
    obj.InsertFirst(230);
    obj.InsertFirst(110);
    obj.Display();

    obj.DisplayDigitSum(11);
    
    return 0;
}
