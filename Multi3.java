class Multi3
{
    public static void main(String args[])
    {
        System.out.println("Current Thread: "+ Thread.currentThread().getName());
        Demo obj1 =   new Demo();   // New
        Demo obj2 =   new Demo();   // New

        obj1.start();   //Runnable
        obj2.start();   //Runnable

        obj1.setName("First_Thread");
        obj2.setName("Second_Thread");

        System.out.println("Current Thread goes to dead state.");  //Dead
    }
}


class Demo extends Thread
{
    public void run()
    {
        String  name = Thread.currentThread().getName();
        System.out.println("Current Thread: "+ name);  //Running

        for(int i=1 ; i<1000; i++)
        {
            System.out.println("Name of thread is: "+name + " with counter "+ i);
        }
    }
}