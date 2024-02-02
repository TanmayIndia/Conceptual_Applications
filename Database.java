import java.sql.*;

class Database
{
    public static void main(String arg[])
    {
        try{
        Connection cobj = DriverManager.getConnection("jdbc:mysql://localhost:3306/PPA","root","");
        Statement sobj = cobj.createStatement();
        ResultSet robj = sobj.executeQuery("select * from student");

        System.out.println("-----------------------------------");
        System.out.println("RID  |   Name  | City   | Marks");
        System.out.println("-----------------------------------");
        while(robj.next())
        {
            System.out.print(robj.getInt("rno"));
            System.out.print("\t"+robj.getString("name"));
            System.out.print("\t"+robj.getString("address"));
            System.out.println("\t"+robj.getInt("marks"));
        }
        System.out.println("-----------------------------------");
        }catch(Exception obj)
        {
            System.out.println(obj);
        }
    }
}