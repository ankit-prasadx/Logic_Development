#include<stdio.h>
#include<stdlib.h>

// Step 5 : Perform the Operation

void DisplayOddEvenSum(int *Arr, int iSize)
{
    int iCnt = 0;
    int iEvenSum = 0;
    int iOddSum = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if ((Arr[iCnt] % 2) == 0)
        {
            iEvenSum = iEvenSum + Arr[iCnt];
        }
        else
        {
            iOddSum = iOddSum + Arr[iCnt];
        }
    }
    printf("Summation of Odd elements are : %d\n",iOddSum);
    printf("Summation of Even elements are : %d\n",iEvenSum);
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
    ptr = (int *)malloc(iLength * sizeof(int));

    // Step 3 : Accept elements of array
    printf("Enter Elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    // Step 4 : Call the Function
    DisplayOddEvenSum(ptr, iLength);


    // Step 6 : Deallocate the resource
    free(ptr);
    return 0;
}