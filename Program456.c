#include<stdio.h>
#include<stdlib.h>

struct nodeBST
{
    int Data;
    struct nodeBST * Lchild;
    struct nodeBST * Rchild;
};

typedef struct nodeBST NODEBST;
typedef struct nodeBST * PNODEBST;
typedef struct nodeBST ** PPNODEBST;

void Insert(PPNODEBST Root, int No)
{
    PNODEBST newn = (PNODEBST)malloc(sizeof(NODEBST));

    newn->Data = No;
    newn->Lchild = NULL;
    newn->Rchild = NULL;

    PNODEBST temp = *Root;

    if(*Root == NULL)
    {
        *Root = newn;
    }
    else
    {
        while(1)
        {
            if(No > temp->Data)
            {
                if(temp->Rchild == NULL)
                {
                    temp->Rchild = newn;
                    break;;
                }
                temp = temp->Rchild;
            }
            else if(No < temp->Data)
            {
                if(temp->Lchild == NULL)
                {
                    temp->Lchild = newn;
                    break;
                }
                temp = temp->Lchild;
            }
            else if(No == temp->Data)
            {
                free(newn);
                printf("Duplicate element not allowed.\n");
                break;
            }
        }
    }
}

int main()
{
    PNODEBST Head = NULL;

    Insert(&Head, 11);
    Insert(&Head, 7);
    Insert(&Head, 21);

    return 0;
}