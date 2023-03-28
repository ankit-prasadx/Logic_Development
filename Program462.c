#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

void Inorder(PNODEBST Root)
{
    if(Root != NULL)
    {
        Inorder(Root->Lchild);
        printf("%d\t",Root->Data);
        Inorder(Root->Rchild);
    }
}

void Preorder(PNODEBST Root)
{
    if(Root != NULL)
    {
        printf("%d\t",Root->Data);
        Preorder(Root->Lchild);
        Preorder(Root->Rchild);
    }
}

void Postorder(PNODEBST Root)
{
    if(Root != NULL)
    {
        Postorder(Root->Lchild);
        Postorder(Root->Rchild);
        printf("%d\t",Root->Data);
    }
}

bool SearchElement(PNODEBST Root ,int Value)
{
    bool flag = false;

    while(Root != NULL)
    {
        if(Root->Data == Value)
        {
            flag = true;
            break;
        }
        else if(Value > Root->Data)
        {
            Root = Root->Rchild;
        }
        else if(Value < Root->Data)
        {
            Root = Root->Lchild;
        }
    }
    return flag;
}


int CountLeafNode(PNODEBST Root)
{
    static int Count = 0;

    if(Root != NULL)
    {
        if((Root->Lchild == NULL) && (Root->Rchild == NULL))
        {
            Count++;
        }
        CountLeafNode(Root->Lchild);
        CountLeafNode(Root->Rchild);
    }
    return Count;
}

int CountParentNode(PNODEBST Root)
{
    static int Count = 0;

    if(Root != NULL)
    {
        if((Root->Lchild != NULL) || (Root->Rchild != NULL))
        {
            Count++;
        }
        CountParentNode(Root->Lchild);
        CountParentNode(Root->Rchild);
    }
    return Count;
}

int CountCompleteParentNode(PNODEBST Root)
{
    static int Count = 0;

    if(Root != NULL)
    {
        if((Root->Lchild != NULL) && (Root->Rchild != NULL))
        {
            Count++;
        }
        CountCompleteParentNode(Root->Lchild);
        CountCompleteParentNode(Root->Rchild);
    }
    return Count;
}
int main()
{
    PNODEBST Head = NULL;
    bool bRet = false;
    int iRet = 0;

    Insert(&Head, 11);
    Insert(&Head, 7);
    Insert(&Head, 21);
    Insert(&Head, 10);
    Insert(&Head, 51);
    Insert(&Head, 2);
    Insert(&Head, 44);

    printf("\nData using Preorder traversal\n");
    Preorder(Head);

    printf("\nData using Postorder traversal\n");
    Postorder(Head);

    printf("\nData using Inorder traversal\n");
    Inorder(Head);

    bRet = SearchElement(Head, 52);

    if(bRet == true)
    {
        printf("\nElement is there in BST\n");
    }
    else
    {
        printf("\nThere is no element in BST\n");
    }

    iRet = CountLeafNode(Head);

    printf("Count of leaf nodes are : %d\n",iRet);

    iRet = CountParentNode(Head);

    printf("Count of parent nodes are : %d\n",iRet);

    iRet = CountCompleteParentNode(Head);

    printf("Count of complete parent nodes are : %d\n",iRet);

    return 0;
}