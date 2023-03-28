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
typedef struct node ** PNODE;

class SinglyLL
{
    public:
        PNODE First;

        SinglyLL();

        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPos(int no,int iPos);

        void DeleteFirst(int no);
        void DeleteLast(int no);
        void DeleteAtPos(int no,int iPos);

        void Display();
        int Count();
        
};

int main()
{
    SinglyLL obj;

    return 0;
}
