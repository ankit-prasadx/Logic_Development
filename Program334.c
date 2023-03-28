#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

// 10th Bit
// 0000    0000    0000    0000    0000    0010    0000    0000
//  0       0       0       0       0       2       0       0
// 00000200
// 0X00000200

bool CheckBit(UINT No)
{
    UINT iMask = 0X00000200;
    UINT Result = 0;

    Result = No & iMask;

    if(Result == iMask)
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
    UINT Value = 0;
    bool bRet = false;

    printf("Enter number : \t");
    scanf("%d",&Value);

    bRet = CheckBit(Value);

    if(bRet == true)
    {
        printf("10th Bit is ON\n");
    }
    else
    {
        printf("10th Bit is OFF\n");
    }

    return 0;
}