#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

//  Turning 4th Bit OFF
//  0000    0000    0000    0000    0000    0000    0000    0000

//  0000    1111    0000    1111    0000    1111    0000    1111

//    0       F       0       F       0       0       0       8

//  0F0F0F0F

//  0X0F0F0F0F

UINT ToggleAlternateNibbles(UINT No)
{
    UINT iMask = 0X0F0F0F0F;
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

    iRet = ToggleAlternateNibbles(Value);

    printf("Updated number is : %d\n",iRet);

    return 0;
}