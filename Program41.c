#include<stdio.h>

// O(N/2)

void EvenFactors(int iNo)
{
    int iCnt = 0;
    printf("Even Factors of %d are :\n",iNo);
    for (iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if(((iNo % iCnt) == 0) && ((iCnt % 2) == 0))
        {
            printf("%d\t",iCnt);
        }
    }
    
}

int main()
{
    int iValue = 0;
    printf("Enter Number : ");
    scanf("%d",&iValue);

    EvenFactors(iValue);

    return 0;
}