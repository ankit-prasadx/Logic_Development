#include<stdio.h>

int CountEvenDigits(int iNo)
{
    int iDigit = 0;
    int iEvenCnt = 0;

    if (iNo == 0)       // Filter for Zero
    {
        return 1;
    }

    if(iNo < 0)     // Updater for Negative
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iEvenCnt++;
        }
        iNo = iNo / 10;
    }
    return iEvenCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please enter number : \n");
    scanf("%d",&iValue);

    iRet = CountEvenDigits(iValue);

    printf("Even number of digits in %d are : %d\n",iValue,iRet);

    return 0;
}