#include<stdio.h>
#include<stdlib.h>

// Time Comlexity = N

// Step 5 : Perform the Operation
int Minimum(int Arr[], int iSize)
{
    int iMin = Arr[0];
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
}

int main()
{
    int *ptr = NULL;
    int iLength = 0;
    int iCnt = 0, iRet = 0;

    // Step 1 : Accept Size of Array
    printf("Enter Number of Elements : ");
    scanf("%d",&iLength);

    // Step 2 : Allocate memory for array
    ptr = (int *)malloc(sizeof(int) * iLength);

    // Step 3 : Accept elements of array
    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    // Step 4 : Call the Function
    iRet = Minimum(ptr,iLength);

    printf("Minimum number is : %d\n",iRet);

    // Step 6 : Deallocate the resource
    free(ptr);

    return 0;
}