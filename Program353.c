#include<stdio.h>

int AdditionR(int iNo)
{
    static int iCnt = 1;
    static int iSum = 0;

    if(iCnt <= iNo)
    {
        iSum = iSum + iCnt;
        iCnt++;
        AdditionR(iNo);
    }
    return iSum;
}

int main()
{
    int Value = 0;
    int iRet = 0;

    printf("Enter the Number : ");
    scanf("%d",&Value);

    iRet = AdditionR(Value);
    printf("Addition is : %d\n",iRet);

    return 0;
}