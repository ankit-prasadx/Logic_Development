#include<stdio.h>

int CountCapitalI(char *str)
{
    static int iCnt = 0;

   if(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCnt++;
        }
        str++;
        CountCapitalI(str);
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the String : ");
    scanf("%[^'\n']s",Arr);

    iRet = CountCapitalI(Arr);
    printf("Count of Capital characters is : %d\n",iRet);

    return 0;
}