import java.util.*;

class Pattern
{
    public void Display(int iNo)
    {
        int i = 0, j = 0;
        int iDigit = 0;
        int iTemp1 = iNo;
        int iTemp2 = iNo;

        while(iTemp1 != 0)
        {
            while(iTemp2 != 0)
            {
                iDigit = iTemp2 % 10;
                System.out.print(iDigit+"\t");
                iTemp2 = iTemp2 / 10;
            }
            iTemp2 = iNo;

            System.out.println();
            iTemp1 = iTemp1 / 10;
        }
        
    }
}

class Program300
{
    public static void main(String arg[])
    {
        Pattern pboj = new Pattern();
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number : ");
        int iNo = sobj.nextInt();
        
        pboj.Display(iNo);
    }
}