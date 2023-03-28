#include<stdio.h>

int CountDigitR(int iNo)
{
    static int iCnt = 0;

    if(iNo != 0)
    {
        iCnt++;
        iNo = iNo / 10;
        CountDigitR(iNo);
    }
    return iCnt;
}

int main()
{
    int Value = 0;
    int iRet = 0;

    printf("Enter the Number : ");
    scanf("%d",&Value);

    iRet = CountDigitR(Value);
    printf("No of Digits are : %d\n",iRet);

    return 0;
}