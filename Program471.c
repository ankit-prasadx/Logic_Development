#include <stdio.h>
#include <stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE)); // Step 1 : Allocate memory

    newn->data = no;
    newn->next = NULL;

    if (*First == NULL) // If linked list is empty
    {
        *First = newn;
    }
    else // if linked list contains at least one node
    {
        newn->next = *First;
        *First = newn;
    }
}

void Display(PNODE First)
{
    printf("Elements fron linked list are :\n");
    while (First != NULL)
    {
        printf("| %d | -> ", First->data);
        First = First->next;
    }
    printf("NULL\n");
}


int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head, 151);
    InsertFirst(&Head, 121);
    InsertFirst(&Head, 111);
    InsertFirst(&Head, 101);
    InsertFirst(&Head, 51);
    InsertFirst(&Head, 21);
    InsertFirst(&Head, 11);

    Display(Head);

    iRet = MiddleNode(Head);

    printf("Middle element is : %d\n", iRet);

    return 0;
}
