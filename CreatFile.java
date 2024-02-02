import java.io.*;

class CreatFile
{
    public static void main(String[] arg)
    {
        try
        {
        File fObj = new File("PPA.txt");
        fObj.createNewFile();
        }
        catch(Exception obj)
        {
            System.out.println("Inside catch");
        }
    }
} 