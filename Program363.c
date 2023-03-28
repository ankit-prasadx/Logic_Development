#include<stdio.h>

int StrLenR(char *str)
{
    static int iCnt = 0;

   if(*str != '\0')
    {
        iCnt++;
        str++;
        StrLenR(str);
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the String : ");
    scanf("%[^'\n']s",Arr);

    iRet = StrLenR(Arr);
    printf("String Length is : %d\n",iRet);

    return 0;
}