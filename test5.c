#include<stdio.h>

void struprX(char *str) // char *str = &sArr;
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
    printf("%d\n",iCnt);
}

int main()
{
    char sArr[20];

    printf("Enter the String : ");
    scanf("%[^'\n']s",sArr);

    struprX(sArr);  // strlwrX(100);

    printf("String After conversion is : %s\n",sArr);

    return 0;
}