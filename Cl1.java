import java.util.*;

class Cl1
{
    public static void main(String args[])
    {
        Stack<Character> sobj = new Stack<Character>();

        sobj.push('a');
        sobj.push('b');
        sobj.push('c');
        sobj.push('d');
        sobj.push('e');

        System.out.println(sobj.pop());
         System.out.println(sobj.pop());

    }
}
