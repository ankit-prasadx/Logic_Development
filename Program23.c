#include<stdio.h>

void Display(int iValue)
{
    register int iCnt = 0;

    for(iCnt = 1; iCnt <= iValue; iCnt++)
    {
        printf("Marvellous : %d\n",iCnt);
    }
}

int main()
{
    int iNo = 0;
    printf("Enter how many numbers you want to display : ");
    scanf("%d",&iNo);
    Display(iNo);

    return 0;
}