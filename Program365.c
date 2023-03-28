#include<stdio.h>

int CountSmallI(char *str)
{
    static int iCnt = 0;

   if(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCnt++;
        }
        str++;
        CountSmallI(str);
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the String : ");
    scanf("%[^'\n']s",Arr);

    iRet = CountSmallI(Arr);
    printf("Count of small case characters is : %d\n",iRet);

    return 0;
}