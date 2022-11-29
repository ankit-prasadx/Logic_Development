#include<stdio.h>

int main()
{
    int Arr[5];
    printf("Enter the elements :\n");
    scanf("%d",&Arr[0]);
    scanf("%d",&Arr[1]);
    scanf("%d",&Arr[2]);
    scanf("%d",&Arr[3]);
    scanf("%d",&Arr[4]);

    printf("Elements from array are :\n");
    printf("%d\t",Arr[0]);
    printf("%d\t",Arr[1]);
    printf("%d\t",Arr[2]);
    printf("%d\t",Arr[3]);
    printf("%d\n",Arr[4]);

    return 0;
}