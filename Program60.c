#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(int iNo)
{
    int iTemp = iNo;
    int iDigit = 0;
    int iRev = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }

    return (iTemp == iRev);
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Please enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckPallindrome(iValue);

    if(bRet == true)
    {
        printf("%d is Pallindrome number\n",iValue);
    }
    else
    {
        printf("%d is  Not Pallindrome\n",iValue);
    }

    return 0;
}