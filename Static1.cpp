#include<iostream>
using namespace std;

class Demo
{
    public:
        int i,j;

        // Demo()
        // {
        //     i=0;
        //     j=0;
        // }

        Demo(int a=10,int b=20)//Parametrized constructor with default arguments
        {
            i=a;
            j=b;
        }

        void Display()
        {
            cout<<"Value of i:"<<i<<"\n";
            cout<<"Value of j:"<<j<<"\n";
        }
};

int main()
{
    Demo obj1;
    obj1.Display();

    Demo obj2(11);
    obj2.Display();
    
    Demo obj3(51,101);
    obj3.Display();
    
    return 0;
}