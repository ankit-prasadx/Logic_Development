// Problem on Numbers

import java.util.*;

class Numbers
{
    public void CommonFactorDisplay(int iNo1, int iNo2)
    {

        int iCnt = 0;
        //            --------- Item Condition--------------
        for(iCnt = 1; (iCnt <= (iNo1/2)) && iCnt <= (iNo2/2); iCnt++)
        {
            if(((iNo1 % iCnt) == 0) && ((iNo2 % iCnt) == 0))
            {
                System.out.println("Common Factor is : "+iCnt);
            }
        }
    }
}

class Program254
{
    public static void main(String G[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First Number : ");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter Second Number : ");
        int iNo2 = sobj.nextInt();

        Numbers nobj = new Numbers();

        nobj.CommonFactorDisplay(iNo1, iNo2);

        sobj.close();
    }
}