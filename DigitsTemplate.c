#include<stdio.h>

int CountDigits(int iNo)
{
    // Code
    return 0;
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