#include<stdio.h>

void strlwrX(char *str) // char *str = &sArr;
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
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

    strlwrX(sArr);  // strlwrX(100);

    printf("String After conversion is : %s\n",sArr);

    return 0;
}