import java.util.*;

class HashTable

{
    public static void main(String arg[])
    {

        Hashtable<String,Integer> hobj = new  Hashtable<String,Integer>();

        hobj.put("PPA",12);
        hobj.put("LB",14);
        hobj.put("Angular",16);
        hobj.put("Tanmay",11);
        hobj.put("Pune",15);

        System.out.println(hobj.get("PPA"));

        Enumeration eobj = hobj.keys();

        while(eobj.hasMoreElements())
        {
             System.out.println(eobj.nextElement());
        }
    }
}