#include<stdio.h>
#include<stdlib.h>

// Time Comlexity = N

// Step 5 : Perform the Operation
void ReverseDisplay(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = iSize-1; iCnt >= 0 ; iCnt--)
    {
        printf("%d\t",Arr[iCnt]);
    }
    printf("\n");
}

int main()
{
    int *ptr = NULL;
    int iLength = 0;
    int iCnt = 0;

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
    printf("Elements in Reverse Order : \n");
    ReverseDisplay(ptr,iLength);

    // Step 6 : Deallocate the resource
    free(ptr);

    return 0;
}