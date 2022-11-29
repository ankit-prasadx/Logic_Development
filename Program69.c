#include<stdio.h>

int main()
{
    int iCnt = 0;
    int Arr[5];
    printf("Enter the elements :\n");
    
    for (iCnt = 0; iCnt < 5; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    printf("Elements from array are :\n");
    for (iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d\t",Arr[iCnt]);
    }

    return 0;
}