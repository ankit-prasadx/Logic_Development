

// Problem on Numbers

import java.util.*;

class Digits
{
    private int CountDigits(int iNo)
    {
        int iCnt = 0;

        while(iNo != 0)
        {
            iCnt++;
            iNo = iNo / 10;
        }
        return iCnt;
    }

    private int Power(int Base, int Index)
    {
        int iAns = 1;

        for(int iCnt = 1; iCnt <= Index; iCnt++)
        {
            iAns = iAns * Base;
        }
        return iAns;
    }

    public boolean CheckArmstrong(int iNo)
    {
        int iTemp = iNo;
        int iCount = CountDigits(iNo);
        int iSum = 0;
        int iRet = 0;
        int iDigit = 0;


        while(iTemp != 0)
        {
            iDigit = iTemp % 10;

            iRet = Power(iDigit, iCount);
            iSum = iSum + iRet;

            iTemp = iTemp / 10;
        }

        if(iSum == iNo)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class Program256
{
    public static void main(String G[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number : ");
        int iNo = sobj.nextInt();

        Digits dobj = new Digits();

        boolean bRet = dobj.CheckArmstrong(iNo);
        if(bRet == true)
        {
            System.out.println(iNo+" is a Armstrong number");
        }
        else
        {
            System.out.println(iNo+" is not a Armstrong number");
        }

        sobj.close();
    }
}