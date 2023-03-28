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

void InsertLast(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE)); // Step 1 : Allocate memory
    PNODE temp = *First;

    newn->data = no;
    newn->next = NULL;

    if (*First == NULL) // If linked list is empty
    {
        *First = newn;
    }
    else // if linked list contains at least one node
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
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

void DisplayR(PNODE First)
{
    if(First != NULL)
    {
        printf("| %d | -> ", First->data);
        First = First->next;
        DisplayR(First);
    }
}

void DisplayReverse(PNODE First)
{
    if(First != NULL)
    {
        DisplayReverse(First->next);
        printf("| %d | -> ", First->data);
    }
}

int Count(PNODE First)
{
    int iCnt = 0;

    while (First != NULL)
    {
        iCnt++;
        First = First->next;
    }
    return iCnt;
}


int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertLast(&Head, 11);
    InsertLast(&Head, 21);
    InsertLast(&Head, 51);
    InsertLast(&Head, 101);

    DisplayReverse(Head);

    iRet = Count(Head);
    printf("Number of nodes are : %d\n", iRet);

    return 0;
}