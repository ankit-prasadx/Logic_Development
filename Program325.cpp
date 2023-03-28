#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node * next;
};

template <class T>
class Queue
{
    public:
        struct node <T> * First;
        int iCount;

        Queue();

        bool IsQueueEmpty();
        void EnQueue(T);      // Insert
        T DeQueue();              // Delete
        void Display();
};

template <class T>
Queue <T> :: Queue()
{
    First = NULL;
    iCount = 0;
}

template <class T>
bool Queue <T> :: IsQueueEmpty()
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

template <class T>
void Queue <T> :: EnQueue(T value)      // InsertLast
{
    struct node <T> * newn = new node <T>;

    newn->data = value;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        struct node <T> * temp = First;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
    }

    iCount++;

    cout<<value<<" gets inserted in the Queue successfully"<<"\n";
}

template <class T>
T Queue <T> :: DeQueue()              // DeleteFirst
{
    if(First == NULL)
    {
        cout<<"Unable to remove the element as Queue is empty"<<"\n";
        return (T)-1;
    }
    else
    {
        T value = First -> data;
        struct node <T> * temp = First;

        First = First -> next;
        delete temp;

        iCount--;

        return value;
    }
}

template <class T>
void Queue <T> :: Display()
{
    if(First == NULL)
    {
        cout<<"Queue is Empty"<<"\n";
    }
    else
    {
        cout<<"Elements of Queue are : "<<"\n";

        struct node <T> * temp = First;

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
    Queue <int>sobj;

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