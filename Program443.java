import java.util.*;

interface Marvellous
{
    public void BubbleSort();
    public void SelectionSort();
    public void InsertionSort();
}

class Sorting implements Marvellous
{
    private int Arr[];

    public Sorting(int Size)
    {
        Arr = new int[Size];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the elements : ");
        for(int i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
    }

    public void Display()
    {
        System.out.println("Elements of array are : ");
        for(int i = 0; i < Arr.length; i++)
        {
            System.out.print(Arr[i] + " ");
        }
        System.out.println();
    }

    public void InsertionSort()
    {}

    public void SelectionSort()
    {
        int i = 0;
        int j = 0;
        int Min_Index = 0;
        int temp = 0;

        for(i = 0; i < Arr.length-1; i++)
        {
            Min_Index = i;
            for(j = i+1; j < Arr.length; j++)
            {
                if(Arr[j] < Arr[Min_Index])
                {
                    Min_Index = j;
                }
            }
            temp = Arr[i];
            Arr[i] = Arr[Min_Index];
            Arr[Min_Index] = temp;
        }
    }

    public void BubbleSort()
    {
        int i = 0;
        int j = 0;
        int temp = 0;

        boolean flag = false;

        for(i = 0; i < Arr.length; i++)
        {
            flag = false;
            for(j = 0; j < Arr.length-i-1; j++)
            {
                if(Arr[j] > Arr[j+1])
                {
                    temp = Arr[j];
                    Arr[j] = Arr[j+1];
                    Arr[j+1] = temp;
                    flag = true;
                }
            }
            if(flag == false)
            {
                break;
            }
        }
    }
}

class Program443
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Size of array : ");
        int Size = sobj.nextInt();

        Sorting obj = new Sorting(Size);
        obj.Accept();
        obj.Display();  // Before Sort

        // obj.BubbleSort();
        obj.SelectionSort();
        obj.Display();  // After Sort
    }
}