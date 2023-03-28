#include<stdio.h>

int FactorialR(int iNo)
{
    static int iCnt = 1;
    static int iSum = 1;

    if(iCnt <= iNo)
    {
        iSum = iSum * iCnt;
        iCnt++;
        FactorialR(iNo);
    }
    return iSum;
}

int main()
{
    int Value = 0;
    int iRet = 0;

    printf("Enter the Number : ");
    scanf("%d",&Value);

    iRet = FactorialR(Value);
    printf("Factorial is : %d\n",iRet);

    return 0;
}