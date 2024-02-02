#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j,k;

        void fun()
        {
            cout<<"Inside Base fun\n";
        }

};

class Derived : public Base
{
    public:
        int a,b;

         void gun()
        {
            cout<<"Inside Derived gun\n";
        }

};

int main()
{
    Base bObj;
    Derived dObj;

    cout<<"Size of bObj"<<sizeof(bObj)<<endl;
    cout<<"Size of dObj"<<sizeof(dObj)<<endl;

    bObj.fun();

    dObj.fun();
    dObj.gun();

    return 0;
}