#include<stdio.h>

int CountDigitI(int iNo)
{
    int iCnt = 0;

    while(iNo != 0)
    {
        iCnt++;
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int Value = 0;
    int iRet = 0;

    printf("Enter the Number : ");
    scanf("%d",&Value);

    iRet = CountDigitI(Value);
    printf("No of Digits are : %d\n",iRet);

    return 0;
}