/*
Input : Row = 4,    Col = 4

Output:
*       *       *       *       *
*       *       *       *
*       *       *
*       *
*

*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    if(iRow != iCol)
    {
        printf("Check input\n");
        return;
    }

    for (i = iRow; i >= 1; i--)
    {
        for(j = i; j >= 1; j--)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows : ");
    scanf("%d",&iValue1);

    printf("Enter number of columns : ");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}
