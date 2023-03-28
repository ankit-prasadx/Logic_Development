import java.util.*;

class MarvellousX
{
    public int CapCount(String s)
    {
        int iCnt = 0;

        char Arr[] = s.toCharArray();

        for(int i = 0; i < Arr.length; i++)
        {
            if((Arr[i] >= 'A') && (Arr[i] <= 'Z'))
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}

class Program276
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please Enter String");

        String str = sobj.nextLine();

        MarvellousX mobj = new MarvellousX();
        int iRet = mobj.CapCount(str);

        System.out.println("Number of capita case letters is : "+iRet);

    }
}