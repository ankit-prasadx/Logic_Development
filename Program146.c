#include<stdio.h>
#include<stdbool.h>

bool CountFrequency(char *str, char ch)
{

    while(*str != '\0')
    {
        if(*str == ch)
        {
            break;
        }
        str++;
    }
    if(*str == '\0')
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    bool bRet = false;

    printf("Enter String : ");
    scanf("%[^'\n]s",Arr);

    printf("Enter character to check : ");
    scanf(" %c",&cValue);

    bRet = CountFrequency(Arr, cValue);

    if (bRet == true)
    {
        printf("Character is present in the String\n");
    }
    else
    {
        printf("Character is not present in the String\n");
    }
    

    return 0;
}