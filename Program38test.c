#include<stdio.h>

void DisplayTable(int iNo)
{
    int iTable = 1;
    register int iCnt = 0;
    for (iCnt = 1; iCnt <= 10; iCnt++)
    {
        iTable = iNo * iCnt;
        printf("%d x %d = %d\n",iNo,iCnt,iTable);
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    DisplayTable(iValue);

    return 0;
}