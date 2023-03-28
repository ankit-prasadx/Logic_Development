#include<stdio.h>

int AdditionI(int iNo)
{
    int iCnt = 1;
    int iSum = 0;

    while(iCnt <= iNo)
    {
        iSum = iSum + iCnt;
        iCnt++;
    }
    return iSum;
}

int main()
{
    int Value = 0;
    int iRet = 0;

    printf("Enter the Number : ");
    scanf("%d",&Value);

    iRet = AdditionI(Value);
    printf("Addition is : %d\n",iRet);

    return 0;
}