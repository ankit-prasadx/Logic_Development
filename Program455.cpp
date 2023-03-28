#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////
// Structure for Singly Linear and Singly Circular
template <class T>
struct nodeS
{
    T data;
    struct nodeS * next;
};
/////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
// Structutre for  Doubly Linear and Doubly Circular
template <class T>
struct nodeD
{
    T data;
    struct nodeD * next;
    struct nodeD * prev;
};

/////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
// Class for Singly Linear Linked List

template <class T>
class SinglyLL
{
    public:
        struct nodeS <T> * First;

        SinglyLL();
        void InsertFirst(T no);
        void InsertLast(T no);
        void InsertAtPos(T no, int Pos)

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int Pos)

        void Display();
        int Count();
};

/////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
// Class for Singly Circular Linked List

template <class T>
class SinglyCL
{
    public:
        struct nodeS <T> * First;

        SinglyCL();
        void InsertFirst(T no);
        void InsertLast(T no);
        void InsertAtPos(T no, int Pos)

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int Pos)

        void Display();
        int Count();

};
/////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
// Class for Doubly Linear Linked List

template <class T>
class DoublyLL
{
    public:
        struct nodeD <T> * First;

        DoublyLL();
        void InsertFirst(T no);
        void InsertLast(T no);
        void InsertAtPos(T no, int Pos)

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int Pos)

        void Display();
        int Count();
};
/////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
// Class for Doubly Circular Linked List

template <class T>
class DoublyCL
{
    public:
        struct nodeS <T> * First;

        DoublyCL();
        void InsertFirst(T no);
        void InsertLast(T no);
        void InsertAtPos(T no, int Pos)

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int Pos)

        void Display();
        int Count();
};
/////////////////////////////////////////////////////////////////

int main()
{
    return 0;
}
