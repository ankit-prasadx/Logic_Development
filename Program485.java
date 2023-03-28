import java.util.*;

class Program485
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        String Arr[] = str.split(" ");

        System.out.println("Number of Words are : "+Arr.length);

        sobj.close();
    }
}
