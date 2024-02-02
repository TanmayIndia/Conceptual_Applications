
class FinalizeDemo1
{
    public static void main(String arg[])
    {
        Employee eObj = new Employee("Amar", 10000, 24, "Baner, Pune");
        eObj.Display();
        eObj=null;
        System.gc();
    }
}

class Employee
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
        protected void finalize()
        {
            System.out.println("Inside finalize");
        }

    void Display()
    {
        System.out.println("Employee name: "+ this.Name);
        System.out.println("Employee Salary: "+this.Salary);
        System.out.println("Employee Age: "+ this.Age);
        System.out.println("Employee Address: "+ this.Address);
    }
}