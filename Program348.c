#include<stdio.h>

void DisplayI()
{
    auto int iCnt = 1;  // auto Storage Class

    while (iCnt <= 4)
    {
        printf("*\t");
        iCnt++;
    }
    printf("\n");
}

void DisplayR()
{
    static int iCnt = 1;    // static Storage class

    if(iCnt <= 4)
    {
        printf("*\t");
        iCnt++;
        DisplayR(); // Recursive Call
    }
}

int main()
{
    DisplayR();

    return 0;
}