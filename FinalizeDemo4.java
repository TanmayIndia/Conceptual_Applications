
class FinalizeDemo4 
{
    public static void main(String arg[])
    {
        try
        {
        Employee eObj1 = new Employee("Amar", 10000, 24, "Baner, Pune");
        Employee eObj2 = (Employee) eObj1.clone();

        eObj1.Display();
        eObj2.Display();

        System.out.println("Hashcode is ......"+ eObj1.hashCode());
         System.out.println("Hashcode is ......"+ eObj2.hashCode());
        }
        catch(CloneNotSupportedException obj)
        {
            System.out.println(obj.toString());
        }
    }
}

class Employee implements Cloneable
{
    public String Name;
    public int Salary;
    public int Age;
    public String Address;

    Employee(String str, int amount, int A, String addr)
    {
        this.Name = str;
        this.Salary = amount;
        this.Age= A;
        this.Address =  addr;
    }
    
    void Display()
    {
        System.out.println("Employee name: "+ this.Name);
        System.out.println("Employee Salary: "+this.Salary);
        System.out.println("Employee Age: "+ this.Age);
        System.out.println("Employee Address: "+ this.Address);
    }
    public Object clone() throws CloneNotSupportedException
    {
        return super.clone();
    }
}