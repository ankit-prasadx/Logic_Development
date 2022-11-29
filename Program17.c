// Demonstration of Iteration using for loop

#include<stdio.h>

/*************************************************************
// Function Prototype
Return_Datatype Function_name(Parameter_List)
{
    Function_Body       -> Sequence / Selection / Iteration / Combination of all
}

**************************************************************

// For loop Prototype

    for(Initialization; Condition; Displacement)
    {
        Loop_Body;
    }

*************************************************************/

void Display(int iValue)
{
    register int iCnt = 0;

    //      1           2         3
    for (iCnt = 1; iCnt <= iValue; iCnt++)
    {
        printf("Jay Ganesh...\n");      // 4
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