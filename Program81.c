#include<stdio.h>
#include<stdlib.h>

// Step 5 : Perform the Operation

int CheckOccurence(int Arr[], int iSize, int iKey)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (iKey == Arr[iCnt])
        {
            break;
        }
    }
    if(iCnt == iSize)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}

int main()
{
    int *ptr = NULL;
    int iLength = 0;
    int iCnt = 0;
    int iRet = 0;
    int iValue = 0;

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

    printf("Enter the number to check first occurence : ");
    scanf("%d",&iValue);

    // Step 4 : Call the Function
    iRet = CheckOccurence(ptr, iLength, iValue);

    if(iRet == -1)
    {
        printf("%d not is present in Array\n",iValue);
    }
    else
    {
        printf("%d is present in Array at index %d\n",iValue,iRet);
    }

    // Step 6 : Deallocate the resource
    free(ptr);
    return 0;
}