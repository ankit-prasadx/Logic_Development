// Problem on Numbers

import java.util.*;

class Numbers
{
    public void EvenFactorDisplay(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 2; iCnt <= (iNo/2); iCnt = iCnt + 2)
        {
            if((iNo % iCnt) == 0)
            {
                System.out.println("Even Factor is : "+iCnt);
            }
        }
    }
}

class Program253
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