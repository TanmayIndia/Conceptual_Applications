import java.util.*;

class Arithmatic
{
    public int Value1;
    public int Value2;

    public Arithmatic(int a, int b)
    {
        this.Value1 = a;
        this.Value2 = b;
    }

    public int Addition()
    {
        int Result = 0;
        Result = this.Value1 + this.Value2;
        return Result;
    }

    public int Subtraction()
    {
        int Result = 0;
        Result = this.Value1 - this.Value2;
        return Result;
    }
}



class OOP
{
    public static void main(String arg[])
    {
        int No1=0, No2=0, Ans=0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first number");
        No1 = sobj.nextInt();

        System.out.println("Enter second number");
        No2 = sobj.nextInt();


        Arithmatic Aobj = new Arithmatic(No1,No2);

        Ans=Aobj.Addition();
        System.out.println("Answer is "+ Ans);

        Ans=Aobj.Subtraction();
        System.out.println("Answer is "+ Ans);
    }
}