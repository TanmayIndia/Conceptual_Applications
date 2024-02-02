class Multi6
{
    public static void main(String args[]) throws Exception
    {
        System.out.println("Current Thread: "+ Thread.currentThread().getName());
        Demo obj1 =   new Demo(); 
        
         obj1.setPriority(8);
        
        Demo obj2 = new Demo();
         obj2.setPriority(8);
         
        obj1.start();   //Runnable
        obj2.start();
     
        System.out.println("Priority of obj1 "+ obj1.getPriority());
        System.out.println("Priority of obj2 "+ obj2.getPriority());
    }
}


class Demo extends Thread
{
    public void run()
    {
        
    }
}