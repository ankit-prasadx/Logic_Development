#include<iostream>
using namespace std;

#pragma pack(1)

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyLL
{
    public:
        // Characteristics
        PNODE First;
        int iCount;

        // Behaviours
        SinglyLL();

        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPos(int no,int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

        void Display();
};

/*
Return_Value Class_Name :: Function_Name(Parameters)
{

}
*/

SinglyLL :: SinglyLL()
{
    First = NULL;
    iCount = 0;
}

void SinglyLL :: InsertFirst(int no)
{
    // Step 1: Allocate the memory for node
    PNODE newn = new NODE;

    // Step 2: Initialize node
    newn->data = no;
    newn->next = NULL;

    // Step 3: Check if LL is empty or not
    if(First == NULL)   // if(iCount == 0)
    {
        First = newn;
        iCount++;
    }
    else    // If LL is contains at least one node
    {
        newn->next = First;
        First = newn;
        iCount++;
    }
}

void SinglyLL :: InsertLast(int no)
{
    // Step 1: Allocate the memory for node
    PNODE newn = new NODE;

    // Step 2: Initialize node
    newn->data = no;
    newn->next = NULL;

    // Step 3: Check if LL is empty or not
    if(First == NULL)   // if(iCount == 0)
    {
        First = newn;
        iCount++;
    }
    else    // If LL is contains at least one node
    {
        
    }
}

void SinglyLL :: InsertAtPos(int no, int iPos)
{}

void SinglyLL :: DeleteFirst()
{}

void SinglyLL :: DeleteLast()
{}

void SinglyLL :: DeleteAtPos(int iPos)
{}

void SinglyLL :: Display()
{
    cout<<"Elements of LL are :"<<"\n";
    PNODE temp = First;

    while (temp != NULL)
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp->next;
    }
    cout<<"NULL"<<"\n";

}


int main()
{
    SinglyLL obj1;
    SinglyLL obj2;

    cout<<"Size of obj1 : "<<sizeof(obj1)<<"\n";
    cout<<"First pointer contains : "<<obj1.First<<"\n";
    cout<<"Number of nodes are : "<<obj1.iCount<<"\n";

    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);

    obj1.Display();

    cout<<"Number of nodes in first linked list are : "<<obj1.iCount<<"\n";

////////////////////////////////////////////////////////////////////////////

    cout<<"Size of obj1 : "<<sizeof(obj2)<<"\n";
    cout<<"First pointer contains : "<<obj2.First<<"\n";
    cout<<"Number of nodes are : "<<obj2.iCount<<"\n";

    obj2.InsertFirst(1001);
    obj2.InsertFirst(510);
    obj2.InsertFirst(210);
    obj2.InsertFirst(110);

    obj2.Display();

    cout<<"Number of nodes in second linked list are : "<<obj2.iCount<<"\n";

    return 0;
}
