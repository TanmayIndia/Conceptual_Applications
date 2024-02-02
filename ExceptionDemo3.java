import java.util.*;

class ExceptionDemo3
{
    public static void main(String[] args)
    {
        try
        {
        System.out.println("Inside try");
        Demo dobj = new Demo();
        dobj.Division();
        }
        catch(ArithmeticException obj)
        {
            System.out.println("Inside catch");
        }
        finally
        {
            System.out.println("Inside finally");
        }
        
    }
}

class Demo
{
    public void Division() throws ArithmeticException
    {
        Scanner Sobj = new Scanner(System.in);

        System.out.println("Enter first number");
        int iNo1= Sobj.nextInt();
        System.out.println("Enter second number");
        int iNo2= Sobj.nextInt();

        int iAns=0;
        
        iAns = iNo1/iNo2;

        System.out.println("Answer is "+ iAns);
    }
}