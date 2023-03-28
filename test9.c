#include<stdio.h>

int main()
{
    int arr[] = {0,1,0,0,1,1,0};

    int n = 0;

    n = sizeof(arr)/sizeof(arr[0]);
    printf("%d\n",sizeof(arr));
    printf("%d\n",sizeof(arr[0]));
    printf("%d\n",n);
    return 0;
}