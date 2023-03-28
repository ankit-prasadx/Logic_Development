import java.util.*;

class Program484
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        for(int i = 0; i < Arr.length; i++)
        {
            if((Arr[i] >= 'A') && (Arr[i] <= 'Z'))
            {
                Arr[i] = (char) (Arr[i] + 32);
            }
        }

        String str2 = Arr.toString();
        System.out.println(str2);
        String str3 = new String(Arr);
        System.out.println(str3);

        sobj.close();
    }
}
