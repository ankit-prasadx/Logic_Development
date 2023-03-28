#include<stdio.h>

int SumFactorsR(int iNo)
{
    static int iCnt = 1;
    static int iSum = 0;

    if(iCnt <= (iNo/2))
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
        iCnt++;
        SumFactorsR(iNo);
    }
    return iSum;
}

int main()
{
    int Value = 0;
    int iRet = 0;

    printf("Enter the Number : ");
    scanf("%d",&Value);

    iRet = SumFactorsR(Value);
    printf("Summation of Factors is  : %d\n",iRet);

    return 0;
}