#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node * next;
};

template <class T>
class SinglyLL
{
    public:
        struct node <T> * First;

        SinglyLL();
        void InsertFirst(T no);
        void Display();
        int Count();
};

template <class T>
SinglyLL <T> :: SinglyLL()
{
    First = NULL;
}

template <class T>
void SinglyLL <T> :: InsertFirst(T no)
{
    struct node <T> * newn = new struct node <T>;
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

template <class T>
void SinglyLL <T> :: Display()
{
    struct node <T> * temp = First;

    while (temp != NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<"\n";
}

template <class T>
int SinglyLL <T> :: Count()
{
    struct node <T> * temp = First;
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
    SinglyLL <int>sobj;

    sobj.InsertFirst(40);
    sobj.InsertFirst(30);
    sobj.InsertFirst(20);
    sobj.InsertFirst(10);

    sobj.Display();

    cout<<sobj.Count()<<"\n";

    return 0;
}