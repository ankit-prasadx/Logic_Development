#include<stdio.h>

void strcpyX(char *src, char *dest) // char *str = &sArr;
{
    while(*src != '\0')
    {
        *dest = *src;

        src++;
        dest++;
    }
    *dest = *src;   // Game Changing Line
}

int main()
{
    char sArr[20];
    char sBrr[20];
    int iRet = 0;

    printf("Enter the String : ");
    scanf("%[^'\n']s",sArr);

    strcpyX(sArr, sBrr);  // strcpyX(100,200);

    printf("Copied string is : %s\n",sBrr);

    return 0;
}