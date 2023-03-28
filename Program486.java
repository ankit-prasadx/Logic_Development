import java.util.*;

class Program486
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        String newStr = str.trim();

        String Arr[] = newStr.split(" ");

        System.out.println("Number of Words are : "+Arr.length);

        sobj.close();
    }
}
