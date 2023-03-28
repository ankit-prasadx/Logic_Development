#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node * next;
};

template <class T>
class Stack
{
    public:
        struct node <T> * First;
        int iCount;

        Stack();

        bool IsStackEmpty();
        void Push(T);      // Insert
        T Pop();              // Delete
        void Display();
};

template <class T>
Stack <T> :: Stack()
{
    First = NULL;
    iCount = 0;
}

template <class T>
bool Stack <T> :: IsStackEmpty()
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
void Stack <T> :: Push(T value)      // InsertFirst
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
        newn->next = First;
        First = newn;
    }

    iCount++;

    cout<<value<<" gets pushed in the stack successfully"<<"\n";
}

template <class T>
T Stack <T> :: Pop()              // DeleteFirst
{
    if(First == NULL)
    {
        cout<<"Unable to pop the element as Stack is empty"<<"\n";
        // return -1;
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
void Stack <T> :: Display()
{
    if(First == NULL)
    {
        cout<<"Stack is Empty"<<"\n";
    }
    else
    {
        cout<<"Elements of stack are : "<<"\n";

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
    Stack <int>sobj;

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