import java.util.*;

class Node
{
    public int Data;
    public Node Next;

    public Node(int No)
    {
        this.Data = No;
        this.Next = null;
    }
}

class SinglyLL
{
    private Node Head;
    private int Count;

    public SinglyLL()
    {
        Head = null;
        Count = 0;
    }

    protected void finalize()
    {
        // Memory Free
    }

    public void InsertFirst(int No)
    {
        Node newn = new Node(No);
        // newn.Data = No;
        // newn.Next = null;

        if(this.Head == null)
        {
            this.Head = newn;
        }
        else
        {
            newn.Next = this.Head;
            this.Head = newn;
        }
        this.Count++;
    }

    public void Display()
    {
        Node temp = this.Head;

        while(temp != null)
        {
            System.out.print("| "+temp.Data+" |->");
            temp = temp.Next;
        }
        System.out.print("NULL\n");
    }

    public int CountNodes()
    {
        return this.Count;
    }

    public void InsertLast(int No)
    {
        Node newn = new Node(No);

        if(Head == null)
        {
            this.Head = newn;
        }
        else
        {
            Node temp = this.Head;

            while(temp.Next != null)
            {
                temp = temp.Next;
            }
            temp.Next = newn;
        }
        this.Count++;
    }

    public void DeleteFirst()
    {
        if(this.Count == 0)   // if(this.Head == null)
        {
            return;
        }
        else if(this.Count == 1)
        {
            this.Head = null;
        }
        else
        {
            Head = Head.Next;
        }
        this.Count--;
    }

    public void DeleteLast()
    {
        if(this.Count == 0)   // if(this.Head == null)
        {
            return;
        }
        else if(this.Count == 1)
        {
            this.Head = null;
        }
        else
        {
            Node temp = this.Head;

            while(temp.Next.Next != null)
            {
                temp = temp.Next;
            }

            temp.Next = null;
        }
        this.Count--;
    }

    public void InsertAtPos(int No, int Pos)
    {
        if(Pos < 1 || Pos > Count+1)
        {
            System.out.println("Invalid Position");
            return;
        }

        if(Pos == 1)
        {
            InsertFirst(No);
        }

        else if(Pos == Count+1)
        {
            InsertLast(No);
        }

        else
        {
            Node newn = new Node(No);
            Node temp = this.Head;

            for(int i = 1; i < Pos-1; i++)
            {
                temp = temp.Next;
            }

            newn.Next = temp.Next;
            temp.Next = newn;

            Count++;
        }
    }

    public void DeleteAtPos(int Pos)
    {
        if(Pos < 1 || Pos > Count)
        {
            System.out.println("Invalid Position");
            return;
        }

        if(Pos == 1)
        {
            DeleteFirst();
        }

        else if(Pos == Count)
        {
            DeleteLast();
        }

        else
        {
            Node temp = this.Head;

            for(int i = 1; i < Pos-1; i++)
            {
                temp = temp.Next;
            }

            temp.Next = temp.Next.Next;
            
            this.Count--;
        }
    }
}

class Program452
{
    public static void main(String arg[])
    {
        SinglyLL obj = new SinglyLL();

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.InsertLast(101);
        obj.InsertLast(111);
        obj.InsertLast(121);
        obj.InsertLast(151);

        obj.Display();

        int Ret = obj.CountNodes();
        System.out.println("Number of nodes are : "+Ret);


        obj.InsertAtPos(55, 5);

        obj.Display();

        Ret = obj.CountNodes();
        System.out.println("Number of nodes are : "+Ret);

        obj.DeleteAtPos(4);

        obj.Display();

        Ret = obj.CountNodes();
        System.out.println("Number of nodes are : "+Ret);

    }
}
