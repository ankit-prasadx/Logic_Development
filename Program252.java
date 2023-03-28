// Problem on Numbers

import java.util.*;

class Numbers
{
    public void EvenFactorDisplay(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
        {
            if(((iNo % iCnt) == 0) && ((iCnt % 2) == 0))
            {
                System.out.println("Even Factor is : "+iCnt);
            }
        }
    }
}

class Program252
{
    public static void main(String G[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number : ");
        int iNo = sobj.nextInt();

        Numbers nobj = new Numbers();

        nobj.EvenFactorDisplay(iNo);

        sobj.close();
    }
}