#include<stdio.h>

void strcpyCap(char *src, char *dest) // char *str = &sArr;
{
    while(*src != '\0')
    {
        if((*src >= 'a') && (*src <= 'z'))
        {
            *dest = *src - 32;
        }
        else
        {
            *dest = *src;
        }
        src++;
        dest++;
    }
    *dest = '\0';   // Game Changing Line
}

int main()
{
    char sArr[20];
    char sBrr[20];
    int iRet = 0;

    printf("Enter the String : ");
    scanf("%[^'\n']s",sArr);

    strcpyCap(sArr, sBrr);  // strcpyX(100,200);

    printf("Copied string is : %s\n",sBrr);

    return 0;
}