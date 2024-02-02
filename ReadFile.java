import java.io.*;

class ReadFile
{
    public static void main(String[] arg)
    {
        try
        {
            FileInputStream fObj = new FileInputStream("PPA.txt");
            int i = 0;

            while((i =  fObj.read()) != -1)
            {
                System.out.print((char) i);
            }
            System.out.println();
        }
        catch(Exception obj)
        {
            System.out.println("Inside catch");
        }
    }
} 