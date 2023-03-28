#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT No, UINT Pos)
{
    UINT iMask = 0X00000001;
    UINT Result = 0;

    if((Pos < 1) || (Pos > 32))
    {
        printf("Invalid Position, It Should be between 1 to 32\n");
        return -1;
    }

    iMask = iMask << (Pos -1);  // Dynamic Mask Formation

    iMask = ~iMask;

    Result = No & iMask;

    return Result;

}

int main()
{
    UINT Value = 0;
    UINT Position = 0;
    UINT iRet = 0;

    printf("Enter number :\t");
    scanf("%d",&Value);

    printf("Enter the position of bit :\t");
    scanf("%d",&Position);

    iRet = OffBit(Value, Position);

    printf("Updated Number is  : %d",iRet);

    return 0;
}