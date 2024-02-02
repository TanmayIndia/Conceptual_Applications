class Base
{   
    public void fun()
    {System.out.println("Inside base fun()");}
    public void sun()
    {System.out.println("Inside base sun()");}
    public void gun()
    {System.out.println("Inside base gun()");}
    public void run()
    {System.out.println("Inside base run()");}
}

class Derived extends Base
{
    
    public void fun()
    {System.out.println("Inside derived fun()");}
    public void sun()
    {System.out.println("Inside derived sun()");}
    public void run(int No)
    {System.out.println("Inside derived run() with one parameter");}
    public void mun()
    {System.out.println("Inside derived mun()");}

}

class OverRiding
{
    public static void main(String arg[])
    {
        Base bobj= new Derived();
        bobj.fun();
        bobj.gun();
        bobj.sun();
        bobj.run();
        bobj.mun();
        //bobj.run(11);

    }
}