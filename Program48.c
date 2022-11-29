// Input : 751
// Output : 3

// Input : 5132
// Output : 4

// Input : 7
// Output : 1

/*

iNo = 751

iDigit = iNo % 10           1
iNo = iNo / 10              75


iDigit = iNo % 10           5
iNo = iNo / 10              7

iDigit = iNo % 10           7
iNo = iNo / 10              0

///////////////////////
iCnt = 0;

while(iNo/10 > 0)
{
    iDigit = iNo % 10;
    iNo = iNo / 10

    ////////// = //;
}

*/

#include<stdio.h>

int CountDigits(int iNo)
{
    int iDigit = 0;

        //1
    int iCnt = 0;
            // 2
    // while (iNo >= 0) // Infinite Loop
    while (iNo > 0)     // Does not work on negative numbers
    {
        iDigit = iNo % 10;  // 4
        iNo = iNo / 10;     // 4
        
        iCnt++; // 3
    }

    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);

    printf("Number of digits in %d are  : %d\n",iValue,iRet);

    return 0;
}