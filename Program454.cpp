#include<iostream>
using namespace std;

template <class T>
struct nodeD
{
    T data;
    struct nodeD * next;
    struct nodeD * prev;
};

template <class T>
class DoublyLL
{
    public:
        struct nodeD <T> * First;

        DoublyLL();
        void InsertFirst(T no);
        void Display();
        int Count();
};

template <class T>
class DoublyCL
{
    public:
        struct nodeS <T> * First;

        DoublyCL();
        void InsertFirst(T no);
        void Display();
        int Count();
};

int main()
{
    return 0;
}