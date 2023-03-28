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

int SearchFirstOccurence(PNODE First, int No)
{
    int Counter = 1;
    int iPos = -1;

    while(First != NULL)
    {
        if(First->data == No)
        {
            iPos = Counter;
            break;
        }
        First = First -> next;
        Counter++;
    }

    return iPos;
}

int SearchLastOccurence(PNODE First, int No)
{
    int Counter = 1;
    int iPos = -1;

    while(First != NULL)
    {
        if(First->data == No)
        {
            iPos = Counter;
        }
        First = First -> next;
        Counter++;
    }

    return iPos;
}

int Frequency(PNODE First, int No)
{
    int Counter = 0;

    while(First != NULL)
    {
        if(First->data == No)
        {
            Counter++;
        }
        First = First -> next;
    }

    return Counter;
}

int MiddleNode(PNODE First)
{
    PNODE Student = First;
    PNODE Teacher = First;

    while(Teacher != NULL)  // only for Even nmber of nodes
    {
        Teacher = Teacher->next->next;
        Student = Student->next;
    }

    return (Student->data);

}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head, 151);
    InsertFirst(&Head, 101);
    InsertFirst(&Head, 121);
    InsertFirst(&Head, 111);
    InsertFirst(&Head, 101);
    InsertFirst(&Head, 51);
    InsertFirst(&Head, 101);
    InsertFirst(&Head, 21);
    InsertFirst(&Head, 11);

    Display(Head);

    iRet = SearchFirstOccurence(Head, 101);
    
    if(iRet == -1)
    {
        printf("There is no such element\n");
    }
    else
    {
        printf("Element is there at index : %d\n",iRet);
    }

    iRet = SearchLastOccurence(Head, 101);
    
    if(iRet == -1)
    {
        printf("There is no such element\n");
    }
    else
    {
        printf("Element is last found at index : %d\n",iRet);
    }

    iRet = Frequency(Head, 101);
    printf("Freqency of element is : %d\n",iRet);

    return 0;
}
