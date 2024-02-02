 import java.io.*;
 
 class  DeleteFile
 {
 public static void main(String[] arg)
    {
        try
        {
           File fObj = new File("PPA.txt");
           fObj.delete();
        }
        catch(Exception obj)
        {
            System.out.println("Inside catch");
        }
    }
 }