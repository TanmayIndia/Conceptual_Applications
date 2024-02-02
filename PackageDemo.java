import Marvellous.Maths;
import Marvellous.Infosystem.Arithmathic;

class PackageDemo
{
    public static void main(String args[])
    {
        Maths mobj = new Maths();
        int iRet=0;
        iRet=  mobj.Addition(10,11);
        System.out.println("The addition is: "+ iRet);

        Arithmathic aobj = new Arithmathic();
        iRet= aobj.Substraction(21,4);

        System.out.println("The substraction is: "+ iRet);
    }
}