#include<stdio.h>

void DisplayReverse(int iNo)
{
    register int iCnt = 0;

    iCnt = iNo;
    while ( iCnt >= 1)
    {
        printf("%d\t",iCnt);
        iCnt--;
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