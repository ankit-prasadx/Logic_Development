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
    int iRet = 0;
    
    SinglyLL <char>cobj;
    cobj.InsertFirst('b');
    cobj.InsertFirst('a');
    cobj.Display();
    iRet = cobj.Count();
    cout<<"Number of Nodes are : "<<iRet<<"\n";

    SinglyLL <int>iobj;
    iobj.InsertFirst(20);
    iobj.InsertFirst(10);
    iobj.Display();
    iRet = iobj.Count();
    cout<<"Number of Nodes are : "<<iRet<<"\n";

    SinglyLL <float>fobj;
    fobj.InsertFirst(20.10f);
    fobj.InsertFirst(10.25f);
    fobj.Display();
    iRet = fobj.Count();
    cout<<"Number of Nodes are : "<<iRet<<"\n";

    SinglyLL <double>dobj;
    dobj.InsertFirst(20.10);
    dobj.InsertFirst(10.25);
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of Nodes are : "<<iRet<<"\n";


    return 0;
}