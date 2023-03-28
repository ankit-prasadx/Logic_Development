import java.util.*;

class Pattern
{
    public void Display(String str)
    {
        int i = 0, j = 0;
        char Arr[] = str.toCharArray();

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr.length; j++)
            {
                System.out.print(Arr[j]+"\t");
            }
            System.out.println();
        }
    }
}

class Program297
{
    public static void main(String arg[])
    {
        Pattern pboj = new Pattern();
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();
        
        pboj.Display(str);
    }
}