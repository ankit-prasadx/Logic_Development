#include<stdio.h>
#include<stdbool.h>

// O(N/2)

bool CheckPerfect(int iNo)
{
    int iSum = 0;
    int iCnt = 0;
    //       1          2           3
    for (iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)       // 4
        {
            iSum = iSum + iCnt;
        }
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
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = CheckPerfect(iValue);
    if(iRet == true){
    printf("The Number %d is a perfect number",iValue);
    }
    else
    {
        printf("The number is not a perfect number\n");
    }
    return 0;
}