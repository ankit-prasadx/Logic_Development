#include<stdio.h>

int Summation(int Data[], int iSize)
{
    int iCnt = 0, iSum = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Data[iCnt];
    }
    return iSum;
}

int main()
{
    int iCnt = 0, iRet = 0;
    int Arr[5];
    printf("Enter the elements :\n");
    
    for (iCnt = 0; iCnt < 5; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    printf("Elements from array are :\n");
    for (iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }

    iRet = Summation(Arr,5);
    printf("Addition of all elements is : %d\n",iRet);

    return 0;
}