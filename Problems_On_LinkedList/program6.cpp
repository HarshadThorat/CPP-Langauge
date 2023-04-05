//write a program which display all elements which are prefect  from SLLL.
//input : 11 -> 28 -> 17 -> 41 -> 6 -> 89
//output : 6  28

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

        bool CheckPerfect(int No)
        {
            int Sum = 0, iCnt = 0;
            int Temp = No;

            for(iCnt = 1; iCnt <= No/2 ; iCnt++)
            {
                if(No % iCnt == 0)
                {
                    Sum = Sum + iCnt;
                }
            }
            return(Sum == Temp);
        }

        void DisplayPerfect(int no)
        {
            while(First != NULL)
            {
                if(CheckPerfect(First->data) == true)
                {
                    cout<<"Prefect number is : "<<First->data<<"\n";
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
    obj.InsertFirst(41);
    obj.InsertFirst(17);
    obj.InsertFirst(28);
    obj.InsertFirst(11);
    obj.Display();

    obj.DisplayPerfect(11);

    return 0;
}
