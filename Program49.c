#include<stdio.h>

int CountDigits(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if (iNo < 0)    // Updater
    {
        iNo = -iNo;
    }

    while (iNo > 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        
        iCnt++;
    }

    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);

    printf("Number of digits in %d are  : %d\n",iValue,iRet);

    return 0;
}