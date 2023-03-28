#include<iostream>
using namespace std;

#pragma pack(1)

struct node
{
    int data;
    struct node * next;
    struct node * prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class DoublyCLL
{
    public:
        PNODE First;
        PNODE Last;

        DoublyCLL();
        
        void InsertFirst(int);
        void InsertLast(int);
        void InsertAtPos(int,int);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);

        void Display();
        int Count();
};


/*
    Return_value Class_Name :: Function_Name(Parameters)
    {

    }
*/

DoublyCLL :: DoublyCLL()    // Default Constructor
{
    First = NULL;
    Last = NULL;
}

void DoublyCLL :: InsertFirst(int no)
{
    PNODE newn = new NODE;
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if((First == NULL) && (Last == NULL))     // LL is Empty
    {
        First = newn;
        Last = newn;
    }
    else        // If LL contains one or more nodes
    {
        newn->next = First;
        (First)->prev = newn;
        First = newn;
    }
    (First)->prev = Last;
    (Last)->next = First;
}

void DoublyCLL :: InsertLast(int no)
{
    PNODE newn = new NODE;
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if((First == NULL) && (Last == NULL))     // LL is Empty
    {
        First = newn;
        Last = newn;
    }
    else        // If LL contains one or more nodes
    {
        (Last)->next = newn;
        newn->prev = Last;
        Last = newn;
    }
    (First)->prev = Last;
    (Last)->next = First;
}

void DoublyCLL :: Display()
{
    PNODE temp = First;
    if((First == NULL) && (Last == NULL))
    {
        cout<<"Linked List is empty"<<"\n";
        return;
    }

    cout<<"Elements of Linked list are : "<<"\n";
    do
    {
        cout<<"|"<<temp->data<<"|<=>";
        temp = temp->next;
    }while(temp != Last->next);

    cout<<"\n";
}

int DoublyCLL :: Count()
{
    int iCnt= 0;
    PNODE temp = First;
    if((First == NULL) && (Last == NULL))
    {
        return iCnt;
    }

    do
    {
        iCnt++;
        temp = temp->next;
    }while(temp != Last->next);

    return iCnt;
}

void DoublyCLL :: DeleteFirst()
{
    if((First == NULL) && (Last == NULL))     // Empty LL
    {
        return;
    }
    else if(First == Last)        // Single node
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else        // More than one node
    {
        First = (First)->next;
        // delete First->prev);
        delete (Last)->next;

        (First)->prev = Last;
        (Last)->next = First;
    }
}

void DoublyCLL :: DeleteLast()
{
    if((First == NULL) && (Last == NULL))     // Empty LL
    {
        return;
    }
    else if(First == Last)        // Single node
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else        // More than one node
    {
        Last = (Last)->prev;
        // delete (Last)->next;
        delete (First)->prev;

        (First)->prev = Last;
        (Last)->next = First;
    }
}

void DoublyCLL :: InsertAtPos(int no, int iPos)
{
    int iNodeCnt = 0;
    int iCnt = 0;
    PNODE newn = NULL;
    PNODE temp = NULL;
    iNodeCnt = Count();


    if((iPos < 1) || (iPos > iNodeCnt+1))
    {
        cout<<"Invalid Position"<<"\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(no);
    }
    else if(iPos == iNodeCnt+1)
    {
        InsertLast(no);
    }
    else
    {
        newn = new NODE;
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        temp = First;

        for(iCnt = 1; iCnt < iPos-1; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;

        temp->next = newn;
        newn->prev = temp;
    }
}

void DoublyCLL :: DeleteAtPos(int iPos)
{
    int iNodeCnt = 0;
    int iCnt = 0;
    PNODE temp = NULL;
    iNodeCnt = Count();


    if((iPos < 1) || (iPos > iNodeCnt))
    {
        cout<<"Invalid Position"<<"\n";
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iNodeCnt)
    {
        DeleteLast();
    }
    else
    {

        temp = First;

        for(iCnt = 1; iCnt < iPos-1; iCnt++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;
    }
}

int main()
{
    int iRet = 0;
    
    DoublyCLL obj;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);

    obj.Display();
    iRet = obj.Count();
    cout<<"Elements of LL are : "<<iRet<<"\n";

    obj.InsertAtPos(105,5);

    obj.Display();
    iRet = obj.Count();
    cout<<"Elements of LL are : "<<iRet<<"\n";

    obj.DeleteAtPos(5);

    obj.Display();
    iRet = obj.Count();
    cout<<"Elements of LL are : "<<iRet<<"\n";

    obj.DeleteFirst();
    obj.DeleteLast();

    obj.Display();
    iRet = obj.Count();
    cout<<"Elements of LL are : "<<iRet<<"\n";

    return 0;
}