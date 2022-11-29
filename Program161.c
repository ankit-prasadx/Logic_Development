#include<stdio.h>

void strrevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';
    
    start = str;
    end = str;
    
    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start ;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char sArr[20];

    printf("Enter the String : ");
    scanf("%[^'\n']s",sArr);

    strrevX(sArr);

    printf("Reverse String is %s\n",sArr);

    return 0;
}