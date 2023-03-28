#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleRange(UINT No, UINT Start, UINT End)
{
    UINT iMask1 = 0XFFFFFFFF;
    UINT iMask2 = 0XFFFFFFFF;
    UINT iMask = 0;
    UINT Result = 0;

    iMask1 = iMask1 << (Start - 1);
    iMask2 = iMask2 >> (32 - End);

    iMask = iMask1 & iMask2;

    Result = No ^ iMask;

    return Result;
}

int main()
{
    UINT Value = 0;
    UINT StartPos = 0;
    UINT EndPos = 0;
    UINT iRet = 0;

    printf("Please Enter Number : ");
    scanf("%d",&Value);

    printf("Enter Starting Bit Position : ");
    scanf("%d",&StartPos);

    printf("Enter Ending Bit Position : ");
    scanf("%d",&EndPos);

    iRet = ToggleRange(Value, StartPos, EndPos);
    printf("Updated number is : %d\n",iRet);

    return 0;
}
