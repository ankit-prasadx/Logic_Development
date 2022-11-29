#include<stdio.h>

char ToLowerX(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        return ch + 32;
    }
    else
    {
        return ch;
    }
}

int main()
{
    char cValue = '\0';
    char cRet = '\0';

    printf("Enter Character : ");
    scanf("%c",&cValue);

    cRet = ToLowerX(cValue);

    printf("Character in lower case is : %c\n",cRet);

    return 0;
}