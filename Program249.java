import java.util.*;

class Arithmetic
{
    public int iValue1;         // Characteristics
    public int iValue2;         // Characteristics

    public Arithmetic()     // Default Constructor
    {
        iValue1 = 0;
        iValue2 = 0;
    }

    public Arithmetic(int i, int j)     // Parameterized Constructor
    {
        iValue1 = i;
        iValue2 = j;
    }

    public int Addition()       // Behaviour
    {
        int Sum = 0;
        Sum = iValue1 + iValue2;
        return Sum;
    }
}

class Program249
{

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

        Arithmetic aobj = new Arithmetic(iNo1, iNo2);
        iRet = aobj.Addition();

        System.out.println("Addition is : "+iRet);

        sobj.close();
    }
}