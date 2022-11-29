#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char ch)
{
    if ((ch >= 65) && (ch <= 90))
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Please enter one character : ");
    scanf("%c",&cValue);

    bRet = CheckCapital(cValue);
    if (bRet == true)
    {
        printf("%c is a upper case character\n",cValue);
    }
    else
    {
        printf("%c is not a upper case character\n",cValue);
    }

    return 0;
}