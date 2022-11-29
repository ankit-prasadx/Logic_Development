#include<stdio.h>

void strtoggleX(char *str) // char *str = &sArr;
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char sArr[20];

    printf("Enter the String : ");
    scanf("%[^'\n']s",sArr);

    strtoggleX(sArr);  // strlwrX(100);

    printf("String After conversion is : %s\n",sArr);

    return 0;
}