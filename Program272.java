
import java.util.*;

class MarvellousX
{
    public int CapitalCount(String s)
    {
        int iCnt = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if((s.charAt(i) >= 'A') && (s.charAt(i) <= 'Z'))
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}

class Program272
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please Enter your full name");

        String str = sobj.nextLine();

        MarvellousX mobj = new MarvellousX();
        int iRet = mobj.CapitalCount(str);

        System.out.println("Number of capital case letters is : "+iRet);

    }
}