#include<stdio.h>

void Display()
{
    int iCnt = 1;

    while (iCnt <= 4)
    {
        printf("*\t");
        iCnt++;
    }
    printf("\n");
}

int main()
{
    Display();

    return 0;
}