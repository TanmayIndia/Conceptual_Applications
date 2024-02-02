class CommandLine 
{
    public static void main(String arg[])
    {
        System.out.println("Number of Command line argumens are: "+ arg.length);

        System.out.println("Command line aguments are : ");

        for(int i = 0; i<arg.length; i++)
        {
            System.out.println(arg[i]);
        }
    }
}