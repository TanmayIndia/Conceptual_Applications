import java.util.*;

class Collections
{
    public static void main(String args[])
    {
        LinkedList<Integer> lobj = new LinkedList<Integer>();
        boolean bRet = false;
        lobj.add(10);
        lobj.add(20);
        lobj.add(30);
        lobj.add(40);
        lobj.addFirst(5);
        System.out.println("index of 30 is :  "+ lobj.indexOf(40));

        System.out.println(lobj);

        

        if(lobj.contains(30))
        {
            System.out.println("Contains 30");
        }
        else
        {
            System.out.println("Does not contains 30 ");
        }

        
        Iterator iobj =  lobj.iterator();

        while(iobj.hasNext())
        {
            System.out.println(iobj.next());
        }
    }
}
