#include<stdio.h>

typedef unsigned int UINT;

int CountOnBits(UINT No)
{
    int Digit = 0;
    int iCnt = 0;

    while(No != 0)
    {
        Digit = No % 2;
        iCnt = iCnt + Digit;
        No = No / 2;
    }
    return iCnt;
}

int main()
{
    UINT Value = 11;
    int iRet = 0;

    printf("Enter Number : \t");
    scanf("%d",&Value);

    iRet = CountOnBits(Value);

    printf("Number of bits whuch are ON are : %d\n",iRet);

    return 0;
}