#include<stdio.h>

int MaxDigit(int iNo)
{
    int iDigit = 0;
    int iMax = 0;
    
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
        if(iMax < iDigit)
        {
            iMax = iDigit;
        }
        if (iMax == 9)
        {
            break;
        }
        
        iNo = iNo / 10;
    }
    return iMax;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please enter number : \n");
    scanf("%d",&iValue);

    iRet = MaxDigit(iValue);

    printf("%d is largest digit in %d \n",iRet,iValue);

    return 0;
}