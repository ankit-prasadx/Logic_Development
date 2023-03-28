#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

//  Turning 4th Bit OFF
//  0000    0000    0000    0000    0000    0000    0000    0000

//  0000    0000    0000    0000    0000    0000    0000    1000

//    0       0     0       0       0       0       0       8

//  00000008

//  0X00000008

UINT ToggleBit(UINT No)
{
    UINT iMask = 0X00000008;
    UINT iResult = 0;

    iResult = No ^ iMask;

    return iResult;
}

int main()
{
    UINT Value = 0;
    UINT iRet = 0;

    printf("Enter number : \t");
    scanf("%d",&Value);

    iRet = ToggleBit(Value);

    printf("Updated number is : %d\n",iRet);

    return 0;
}