#include<stdio.h>

int Factorial(int iNo)
{
    unsigned long int iFact = 1;
    register int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;

}

int main()
{
    unsigned long int iRet = 0;
    int iValue = 0;
    printf("Enter the Value : ");
    scanf("%d",&iValue);
    iRet = Factorial(iValue);

    printf("Factorial of %d is : %d\n",iValue,iRet);

    return 0;
}