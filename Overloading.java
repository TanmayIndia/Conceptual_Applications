class Arithmatic
{
    public int Addition(int A, int B)
    {
        return A+B;
    }
    public int Addition(int A, int B, int C)
    {
        return A+B+C;
    }
    public double Addition(double A, double B)
    {
        return A+B;
    }
}
class Overloading
{
    public static void main(String arg[])
    {
       Arithmatic aobj = new Arithmatic();

       int iRet=0;
       double dRet=0.0;

       iRet=aobj.Addition(10,11);
       System.out.println("Addition is: "+iRet);
       iRet=aobj.Addition(10,11,21);
       System.out.println("Addition is: "+iRet);
       dRet=aobj.Addition(10.3,11.23);
       System.out.println("Addition is: "+dRet);

    }
}