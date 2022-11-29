#include<stdio.h>

void DisplayTable(int iNo)
{
    register int iCnt = 0;

    printf("______________________________\n");
    printf("Table of %d is :\n",iNo);
    printf("______________________________\n");
    for (iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\n",iNo * iCnt);
    }
    printf("______________________________\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    DisplayTable(iValue);

    return 0;
}