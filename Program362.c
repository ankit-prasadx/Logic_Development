#include<stdio.h>

int StrLenI(char *str)
{
    int iCnt = 0;

   while(*str != '\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the String : ");
    scanf("%[^'\n']s",Arr);

    iRet = StrLenI(Arr);
    printf("String Length is : %d\n",iRet);

    return 0;
}