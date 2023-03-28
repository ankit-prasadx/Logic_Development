#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
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
        CheckPerfect(iNo);
    }
    if(iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int Value = 0;
    bool bRet = false;

    printf("Enter the Number : ");
    scanf("%d",&Value);

    bRet = CheckPerfect(Value);
    if(bRet == true)
    {
        printf("%d is perfect number\n",Value);
    }
    else
    {
        printf("%d is Not Perfect Number\n",Value);
    }

    return 0;
}