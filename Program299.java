import java.util.*;

class Pattern
{
    public void Display(int iNo)
    {
        int i = 0, j = 0;
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            System.out.print(iDigit+"\t");
            iNo = iNo / 10;
        }
        System.out.println();
    }
}

class Program299
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