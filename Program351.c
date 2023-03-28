#include<stdio.h>

void DisplayR(int iNo)
{
    static int iCnt = 1;

    if(iCnt <= iNo)
    {
        printf("*\t");
        iCnt++;
        DisplayR(iNo); // Recursive Call
    }
}

int main()
{
    int Value = 0;

    printf("Enter the Number : ");
    scanf("%d",&Value);
    DisplayR(Value);
    printf("\nEnd Of Main\n");

    return 0;
}