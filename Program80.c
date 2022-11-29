#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// Step 5 : Perform the Operation

bool CheckOccurence(int Arr[], int iSize, int iKey)
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
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int *ptr = NULL;
    int iLength = 0;
    int iCnt = 0;
    bool bRet = false;
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

    printf("Enter the number to check : ");
    scanf("%d",&iValue);

    // Step 4 : Call the Function
    bRet = CheckOccurence(ptr, iLength, iValue);

    if(bRet == true)
    {
        printf("%d is present in Array\n",iValue);
    }
    else
    {
        printf("%d not is present in Array\n",iValue);
    }

    // Step 6 : Deallocate the resource
    free(ptr);
    return 0;
}