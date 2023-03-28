#include<stdio.h>
int main()
{
    int No = 4534;
    int *p = &No;
    int *q = &No;
    int **x = &p;
    int ***y = &q;
    int **a = &p;
    int ***b = &q;

    printf("Value of No is : \n",No);
    printf("Address of No is : \n",&(No));
    printf("Size of No is : \n",sizeof(No));
    printf("Value of q is : \n",q);
    printf("Value of *x is : \n",*x);
    printf("Value of **b is : \n",**b);
    printf("Size of b is : \n",sizeof(b));
    printf("Address of y is : \n",&y);
    printf("Address of p is : \n",&p);
    printf("Value of *p is : \n",*p);
    printf("Value of ****y is : \n",(****y));
    printf("Value of ***x is : \n",***x);
    printf("Value of ***b is : \n",***b);
    printf("Size of p is : \n",sizeof(p));
    printf("Size of ***x is : \n",sizeof(***x));
    printf("Address of **q is : \n",&(**q)) ;
    printf("Address of ***x is : \n",&(***x));

    return 0;
}