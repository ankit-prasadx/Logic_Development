// Demonstration of Iteration using while loop

#include<stdio.h>

/*************************************************************
// Function Prototype
Return_Datatype Function_name(Parameter_List)
{
    Function_Body       -> Sequence / Selection / Iteration / Combination of all
}

**************************************************************

// while loop Prototype

    Initialization;

    while(Condition)
    {
        Loop_Body;

        Displacement;
    }


*************************************************************/

void Display(int iValue)
{
    int iCnt = 0;

    iCnt = 1;       // 1
    while (iCnt <= 5)       // 2
    {
        printf("Jay Gamesh...\n");      // 4
        iCnt++;     // 3
    }
    
    
}

int main()
{
    int iNo = 0;
    printf("Enter the Number of iterations : ");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}