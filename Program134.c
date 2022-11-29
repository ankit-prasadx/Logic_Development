#include<stdio.h>

int strlenX(char *str)
{
    int iCnt = 0;
    while (*str != '\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}

int main()
{
    char name[20];
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s",name);

    iRet = strlenX(name);

    printf("Number of Characters are %d\n",iRet);

    return 0;
}