// Demonstration of Iteration using do-while loop

#include<stdio.h>

/*************************************************************
// Function Prototype
Return_Datatype Function_name(Parameter_List)
{
    Function_Body       -> Sequence / Selection / Iteration / Combination of all
}

**************************************************************

// do-while loop Prototype

    Initialization;

    do
    {
        Loop_Body;

        Displacement;

    }while(Condition);


*************************************************************/

void Display(int iValue)
{
    int iCnt = 0;

    iCnt = 1;       // 1
    do
    {
        printf("Jay Gamesh...\n");      // 4
        iCnt++;     // 3
    }while(iCnt <= iValue);      // 2

}

int main()
{
    int iNo = 0;
    printf("Enter the Number of iterations : ");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}