#include<iostream>
using namespace std;

class Demo //Class Definition
{
    public:
        int i,j;
            
        Demo() //Defualt Constructor
        {
            cout<<"Inside defualt constructor\n";
            i=0;
            j=0;
        }

        Demo(int A,int B) //Parametrised constructor
        {
            cout<<"Inside prametrised constructor\n";
            i=A;
            j=B;
        }

        Demo(Demo &ref) //Copy constructor
        {
            cout<<"Inside copy constructor\n";
            i=ref.i;
            j=ref.j;
        }

        ~Demo()
        {
            cout<<"Inside Destructor\n";
        }
};
int main()
{
    Demo obj1;
    Demo obj2(23,64);
    Demo obj3(obj2);

    return 0;
}