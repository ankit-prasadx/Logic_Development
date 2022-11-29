#include<stdio.h>

int CountSpace(char *str) // char *str = &sArr;
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if((*str == ' '))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char sArr[20];
    int iRet = 0;

    printf("Enter the String : ");
    scanf("%[^'\n']s",sArr);

    iRet = CountSpace(sArr);  // strlwrX(100);

    printf("White Spaces in String is : %d\n",iRet);

    return 0;
}