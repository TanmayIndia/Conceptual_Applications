class Demo
{
    public int a;
    public final int b;

    public Demo()
    {
        a=11;
        b=21;
    }
    public Demo(int i, int j)
    {
        a=i;
        b=j;
    }
}

class Final1
{
    public static void main(String arg[])
    {
        Demo dobj = new Demo();
        dobj.a++;
        System.out.println("Value of A: "+dobj.a);
        System.out.println("Value of B: "+dobj.b);

        Demo dobj1 = new Demo(11,21);
        System.out.println("Value of A: "+dobj1.a);
        System.out.println("Value of B: "+dobj1.b);
       // dobj.b++;
        
    }
}