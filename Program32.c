#include<stdio.h>

// O(N/2)

void DisplayFactors(int iNo)
{
    int iCnt = 0;
    printf("Factors of %d are :\n",iNo);
    //       1          2           3
    for (iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)       // 4
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

    DisplayFactors(iValue);

    return 0;
}