#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

// 12th Bit
// 0000    0000    0000    0000    0000    1000    0000    0000
//  0       0       0       0       0       8       0       0
// 00000800
// 0X00000800

bool CheckBit(UINT No)
{
    UINT iMask = 0X00000800;
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
        printf("12th Bit is ON\n");
    }
    else
    {
        printf("12th Bit is OFF\n");
    }

    return 0;
}