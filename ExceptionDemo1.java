import java.util.*;

class ExceptionDemo1
{
    public static void main(String[] args)
    {
        Scanner Sobj = new Scanner(System.in);

        System.out.println("Enter first number");
        int iNo1= Sobj.nextInt();
        System.out.println("Enter second number");
        int iNo2= Sobj.nextInt();

        int iAns=0;

        iAns = iNo1/iNo2;

        System.out.println("The answer is "+ iAns);
    }
}