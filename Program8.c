#include<stdio.h>

int DivisibleByFive(int iNo)
{
    int iAns = 0;
    iAns = iNo % 5;

    if (iAns == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = DivisibleByFive(iValue);

    if (iRet == 0)
    {
        printf("%d is not divisible by 5",iValue);
    }
    else
    {
        printf("%d is divisible by 5",iValue);
    }

    return 0;
}