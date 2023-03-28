#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class SinglyLL
{
    public:
        PNODE First;

        SinglyLL();
        void InsertFirst(int no);
        void Display();
        int Count();
};

SinglyLL :: SinglyLL()
{
    First = NULL;
}

void SinglyLL :: InsertFirst(int no)
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

void SinglyLL :: Display()
{
    PNODE temp = First;

    while (temp != NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<"\n";
}

int SinglyLL :: Count()
{
    PNODE temp = First;
    int iCount = 0;

    while (temp != NULL)
    {
        iCount++;
        temp = temp->next;
    }
    return iCount;
}

int main()
{
    SinglyLL sobj;

    sobj.InsertFirst(40);
    sobj.InsertFirst(30);
    sobj.InsertFirst(20);
    sobj.InsertFirst(10);

    sobj.Display();

    cout<<sobj.Count()<<"\n";

    return 0;
}