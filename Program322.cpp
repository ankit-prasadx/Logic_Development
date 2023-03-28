#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * next;
};

class Stack
{
    public:
        struct node * First;
        int iCount;

        Stack();

        bool IsStackEmpty();
        void Push(int);      // Insert
        int Pop();              // Delete
        void Display();
};

Stack :: Stack()
{
    First = NULL;
    iCount = 0;
}

bool Stack :: IsStackEmpty()
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

void Stack :: Push(int value)      // InsertFirst
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
        newn->next = First;
        First = newn;
    }

    iCount++;

    cout<<value<<" gets pushed in the stack successfully"<<"\n";
}

int Stack :: Pop()              // DeleteFirst
{
    if(First == NULL)
    {
        cout<<"Unable to pop the element as Stack is empty"<<"\n";
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

void Stack :: Display()
{
    if(First == NULL)
    {
        cout<<"Stack is Empty"<<"\n";
    }
    else
    {
        cout<<"Elements of stack are : "<<"\n";

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
    Stack sobj;

    sobj.Push(11);
    sobj.Push(21);
    sobj.Push(51);
    sobj.Push(101);

    sobj.Display();

    int iRet = sobj.Pop();
    cout<<"Poped element is : "<<iRet<<"\n";

    iRet = sobj.Pop();
    cout<<"Poped element is : "<<iRet<<"\n";

    sobj.Display();
    
    return 0;
}