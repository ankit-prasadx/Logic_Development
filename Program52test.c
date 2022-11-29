#include<stdio.h>

int SumOfDigits(int iNo)
{
    int iSum = 0;
    int iDigit = 0;
    
    while (iNo > 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iSum = iSum + iDigit;
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = SumOfDigits(iValue);

    printf("Sum of digits in %d are  : %d\n",iValue,iRet);


    return 0;
}