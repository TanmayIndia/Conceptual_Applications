


class Single
{
    public static void main(String arg[])
    {
        Derive dobj =  new Derive();
        dobj.fun1();
        dobj.fun2();

    }
}



class Base
{
    public int a,b;

    public Base()
    {
        System.out.println("Inside Base constructor.");
    }

    public void fun1()
    {
        System.out.println("Inside fun2.");
    }
}

class Derive extends Base
{

    public int x,y;

    public Derive()
    {
        System.out.println("Inside Derive constructor.");
    }

    public void fun2()
    {
        System.out.println("Inside fun1.");
    }
}