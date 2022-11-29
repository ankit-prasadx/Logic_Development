#include<stdio.h>

int strlenX(char str[])
{
    int iCnt = 0, i = 0;
    for(i = 0; str[i] != '\0'; i++)
    {
        iCnt++;
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