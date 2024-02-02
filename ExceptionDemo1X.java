import java.util.*;

class ExceptionDemo1X
{
    public static void main(String[] args)
    {
        Scanner Sobj = new Scanner(System.in);

        System.out.println("Enter first number");
        int iNo1= Sobj.nextInt();
        System.out.println("Enter second number");
        int iNo2= Sobj.nextInt();

        int iAns=0;

        try
        {
            System.out.println("Inside try block");
            iAns = iNo1/iNo2;
        }
        catch(ArithmeticException obj)
        {
            System.out.println("Inside catch block  "+ obj);
        }
         catch(ArrayIndexOutOfBoundsException obj)
        {
            System.out.println("Inside catch block  "+ obj);
        }
         catch(Exception obj)
        {
            System.out.println("Inside catch block  "+ obj);
        }
        finally
        {
            System.out.println("Inside finally block");
        }
        System.out.println("The answer is "+ iAns);
    }
}