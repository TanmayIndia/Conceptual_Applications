#include<iostream>
using namespace std;

class Demo
{
    public:
        int i,j;
        static int k;


        Demo(int a=10,int b=20)
        {
            i=a;
            j=b;
        }

        void Display()
        {
            cout<<"Inside non static method Display()\n";
            cout<<"Value of i:"<<i<<"\n";
            cout<<"Value of j:"<<j<<"\n";
            cout<<"Value of k:"<<k<<"\n";
        }

        static void Fun()
        {
            cout<<"Inside static method Fun()\n";
            cout<<"Value of k:"<<k<<"\n";

        } 
};

int Demo::k=121;

int main()
{
    cout<<"Value of k :"<<Demo::k<<"\n";
    
    Demo::Fun();
    
    Demo obj1(32,41);
    Demo obj2(111,51);
    Demo obj3(251,101);

    cout<<"Size of object1 :"<<sizeof(obj1)<<"\n";
    
    obj1.Display();
    obj2.Display();
    obj3.Display();
    
    obj1.Fun() // Internally Demo::Fun();
    return 0;
}