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

void DeleteFirst(PPNODE First)
{
    PNODE temp = *First;

    if(*First == NULL)      // Empty Linked List
    {
        return;
    }
    else if((*First) -> next == NULL)   // Only 1 node in Linked List
    {
        free(*First);
        *First = NULL;
    }
    else    // More than 1 node in Linked List
    {
        (*First) = (*First) -> next;
        free(temp);
    }
}

void DeleteLast(PPNODE First)
{
    PNODE temp = *First;
    
    if(*First == NULL)      // Empty Linked List
    {
        return;
    }
    else if((*First) -> next == NULL)   // Only 1 node in Linked List
    {
        free(*First);
        *First = NULL;
    }
    else    // More than 1 node in Linked List
    {
        while(temp -> next -> next != NULL)
        {
            temp = temp -> next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

void InsertAtPos(PPNODE First, int no, int iPos)
{
    int NodeCnt = 0;
    int iCnt = 0;
    PNODE newn = NULL;
    PNODE temp = NULL;

    NodeCnt = Count(*First);

    if((iPos < 1) || (iPos > (NodeCnt + 1)))
    {
        printf("Invalid Poistion\n");
        return;
    }
    
    if(iPos == 1)
    {
        InsertFirst(First,no);
    }
    else if(iPos == NodeCnt+1)
    {
        InsertLast(First,no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = no;
        newn->next = NULL;

        temp = *First;
        for(iCnt = 1; iCnt < iPos-1; iCnt++)
        {
            temp = temp -> next;
        }
        newn->next = temp->next;
        temp->next = newn;
    }
}

void DeleteAtPos(PPNODE First, int iPos)
{
    PNODE temp1 = NULL;
    PNODE temp2 = NULL;
    int iCnt = 0;
    int NodeCnt = 0;

    NodeCnt = Count(*First);

    if((iPos < 1) || (iPos > NodeCnt))
    {
        printf("Invalid Position\n");
    }

    if(iPos == 1)
    {
        DeleteFirst(First);
    }
    else if(iPos == NodeCnt)
    {
        DeleteLast(First);
    }
    else
    {
        temp1 = *First;

        for(iCnt = 1; iCnt < iPos-1; iCnt++)
        {
            temp1 = temp1 -> next;
        }

        temp2 = temp1->next;
        
        temp1->next = temp2->next;
        free(temp2);
    }
}

int main()
{
    PNODE Head = NULL;

    int iChoice = 0;
    int iPos = 0;
    int iRet = 0;
    int iNo = 0;

    printf("Welcome to the Data Structure application written by Ankit Prasad\n");

    while(1)
    {
        printf("---------------------------------------------------------------\n");

        printf("----------------------------------------\n");
        printf("Please Select the desired option : \n");
        printf("1 : Insert new node at first position\n");
        printf("2 : Insert new node at last position\n");
        printf("3 : Insert new node at given position\n");
        printf("4 : Delete node from first position\n");
        printf("5 : Delete node from last position\n");
        printf("6 : Delete node from given position\n");
        printf("7 : Display contents of linked list\n");
        printf("8 : Count number of nodes of linked list\n");
        printf("----------------------------------------\n");

        scanf("%d",&iChoice);

        switch (iChoice)
        {
        case 1:
            printf("Enter the data that you want to insert : \n");
            scanf("%d",&iNo);

            InsertFirst(&Head, iNo);
            break;
        
        case 2:
            printf("Enter the data that you want to insert : \n");
            scanf("%d",&iNo);

            InsertLast(&Head, iNo);
            break;
        
        case 3:
            printf("Enter the data that you want to insert : \n");
            scanf("%d",&iNo);
            
            printf("Enter the position : \n");
            scanf("%d",&iPos);

            InsertAtPos(&Head, iNo, iPos);
            break;
        
        case 4:
            DeleteFirst(&Head);
            break;
        
        case 5:
            DeleteLast(&Head);
            break;
        
        case 6:
            printf("Enter the position\n");
            scanf("%d",&iPos);

            DeleteAtPos(&Head, iPos);
            break;
        
        case 7:
            Display(Head);
            break;
        
        case 8:
            iRet = Count(Head);
            printf("Number of elements are : %d\n",iRet);
            break;
        
        case 9:
            printf("Thank You for using the application\n");
            return 0;

        default:
            printf("Invalid Option\n");
            break;
        }

        printf("---------------------------------------------------------------\n");
    }

    return 0;
}
