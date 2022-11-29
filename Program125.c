#include<stdio.h>

int main()
{
    int i = 0;
    printf("________________________________________________________\n");
    printf("ASCII table\n");

    printf("Character \t Decimal\t Hex\t Octal\n");
    for(i = 0; i <= 127; i++)
    {
        printf("%c\t %d\t %x\t %o\n",i,i,i,i);
    }
    printf("________________________________________________________\n");

    return 0;
}