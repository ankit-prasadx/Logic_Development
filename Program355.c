#include<stdio.h>

void FactorsI(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int Value = 0;

    printf("Enter the Number : ");
    scanf("%d",&Value);

    FactorsI(Value);

    return 0;
}