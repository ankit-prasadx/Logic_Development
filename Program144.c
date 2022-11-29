#include<stdio.h>

int CountFrequency(char *str, char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n]s",Arr);

    printf("Enter character to count occurence : ");
    scanf(" %c",&cValue);

    iRet = CountFrequency(Arr, cValue);

    printf("Frequency of %c is %d\n",cValue,iRet);

    return 0;
}