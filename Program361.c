#include<stdio.h>

int SumDigitR(int iNo)
{
    static int iSum = 0;
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
        SumDigitR(iNo);
    }
    return iSum;
}

int main()
{
    int Value = 0;
    int iRet = 0;

    printf("Enter the Number : ");
    scanf("%d",&Value);

    iRet = SumDigitR(Value);
    printf("Summation of Digits are : %d\n",iRet);

    return 0;
}