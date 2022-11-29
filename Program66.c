#include<stdio.h>

int MinDigit(int iNo)
{
    int iDigit = 0;
    int iMin = 9;

    // if (iNo == 0)       // Filter for Zero
    // {
    //     return 0;
    // }

    if(iNo < 0)     // Updater for Negative
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if(iMin > iDigit)
        {
            iMin = iDigit;
        }
        iNo = iNo / 10;
    }
    return iMin;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please enter number : \n");
    scanf("%d",&iValue);

    iRet = MinDigit(iValue);

    printf("%d is smallest digit in %d \n",iRet,iValue);

    return 0;
}