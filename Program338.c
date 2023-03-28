#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

//  Turning 4th Bit OFF
//  0000    0000    0000    0000    0000    0001    1100    0000

//  1111    1111    1111    1111    1111    1111    1111    0111

//  F       F       F       F       F       F       F       7

//  FFFFFFF7

//  0XFFFFFFF7

UINT OffBit(UINT No)
{
    UINT iMask = 0XFFFFFFF7;
    UINT iResult = 0;

    iResult = No & iMask;

    return iResult;
}

int main()
{
    UINT Value = 0;
    UINT iRet = 0;

    printf("Enter number : \t");
    scanf("%d",&Value);

    iRet = OffBit(Value);

    printf("Updated number is : %d\n",iRet);

    return 0;
}