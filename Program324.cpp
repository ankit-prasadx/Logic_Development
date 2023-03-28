#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * next;
};

class Queue
{
    public:
        struct node * First;
        int iCount;

        Queue();

        bool IsQueueEmpty();
        void EnQueue(int);      // Insert
        int DeQueue();              // Delete
        void Display();
};

Queue :: Queue()
{
    First = NULL;
    iCount = 0;
}

bool Queue :: IsQueueEmpty()
{
    if(iCount == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Queue :: EnQueue(int value)      // InsertLast
{
    struct node * newn = new node;

    newn->data = value;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        struct node * temp = First;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
    }

    iCount++;

    cout<<value<<" gets inserted in the Queue successfully"<<"\n";
}

int Queue :: DeQueue()              // DeleteFirst
{
    if(First == NULL)
    {
        cout<<"Unable to remove the element as Queue is empty"<<"\n";
        return-1;
    }
    else
    {
        int value = First -> data;
        struct node * temp = First;

        First = First -> next;
        delete temp;

        iCount--;

        return value;
    }
}

void Queue :: Display()
{
    if(First == NULL)
    {
        cout<<"Queue is Empty"<<"\n";
    }
    else
    {
        cout<<"Elements of Queue are : "<<"\n";

        struct node * temp = First;

        while(temp != NULL)
        {
            cout<<"|"<<temp->data<<"|->";
            temp = temp->next;
        }
        cout<<"NULL"<<"\n";
    }
}


int main()
{
    Queue sobj;

    sobj.EnQueue(11);
    sobj.EnQueue(21);
    sobj.EnQueue(51);
    sobj.EnQueue(101);

    sobj.Display();

    int iRet = sobj.DeQueue();
    cout<<"Removed element is : "<<iRet<<"\n";

    iRet = sobj.DeQueue();
    cout<<"Removed element is : "<<iRet<<"\n";

    sobj.Display();
    
    return 0;
}