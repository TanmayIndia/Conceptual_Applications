import java.util.*;

class ExceptionDemo2
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int Arr[]  = {11,21,31,41,51};

        System.out.println("Enter the index from where you want to fetch the data");
        int iIndex= sobj.nextInt();

        System.out.println("Data is :"+ Arr[iIndex]);

    }
}