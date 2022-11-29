#include<stdio.h>
#include<stdlib.h>

// float Average(int *Arr, int iSize)
// {}

float Average(int Arr[], int iSize)
{
    int iSum = 0;
    register int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return (iSum / iSize);
}

int main()
{
    int *ptr = NULL;
    int iLength = 0;
    register int iCnt = 0;
    float fRet = 0.0f;

    printf("Enter the number of elements : ");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Please Enter the elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    fRet = Average(ptr, iLength);
    printf("Average of elements is : %f",fRet);

    free(ptr);

    return 0;
}