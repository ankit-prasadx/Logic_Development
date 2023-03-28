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
        // Characteristics
        PNODE First;
        int iCount;

        // Behaviours
        SinglyLL();

        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPos(int no,int iPos);

        void DeleteFirst(int no);
        void DeleteLast(int no);
        void DeleteAtPos(int no,int iPos);

        void Display();
};

int main()
{
    SinglyLL obj1;
    SinglyLL obj2;

    return 0;
}
