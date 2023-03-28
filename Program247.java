import java.util.*;

class Program247
{

    static int Addition(int i, int j)
    {
        int Sum = 0;
        Sum = i + j;
        return Sum;
    }

    public static void main(String S[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo1 = 0;
        int iNo2 = 0;
        int iRet = 0;

        System.out.println("Enter First Number : ");
        iNo1 = sobj.nextInt();

        System.out.println("Enter Second Number : ");
        iNo2 = sobj.nextInt();

        iRet = Addition(iNo1, iNo2);

        System.out.println("Addition is : "+iRet);

        sobj.close();
    }
}