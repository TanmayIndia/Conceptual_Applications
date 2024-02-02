import java.io.*;

class WriteFile
{
    public static void main(String[] arg)
    {
        try
        {
            String Data = "Marvellous Infosystem";
            byte Arr[] = Data.getBytes();

            FileOutputStream fObj = new FileOutputStream("PPA.txt");
            fObj.write(Arr);
        }
        catch(Exception obj)
        {
            System.out.println("Inside catch");
        }
    }
} 