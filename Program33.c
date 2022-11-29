#include<stdio.h>

// O(N/2)

int AddFactors(int iNo)
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
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = AddFactors(iValue);
    printf("Additon of factors is : %d",iRet);
    
    return 0;
}