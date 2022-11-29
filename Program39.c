#include<stdio.h>

void DisplayReverse(int iNo)
{
    register int iCnt = 0;

    // for (iCnt = iNo; iCnt >= 1; iCnt--)
    for (iCnt = iNo; iCnt > 0; iCnt--)
    {
        // printf("%d\n",iCnt);
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    DisplayReverse(iValue);

    return 0;
}