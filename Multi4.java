class Multi4
{
    public static void main(String args[]) throws Exception
    {
        System.out.println("Current Thread: "+ Thread.currentThread().getName());
        Demo obj =   new Demo();   // New
        obj.start();   //Runnable
        obj.join();
        obj.setName("First_Thread");
        System.out.println("End of Main thread");
    }
}


class Demo extends Thread
{
    public void run()
    {
        for(int i=1 ; i<=100; i++)
        {
            try
            {   
                System.out.println("Value of i :"+ i);
                sleep(100);
            }
            catch(Exception obj)
            {

            }
        }
        System.out.println("End of thread");
    }
}