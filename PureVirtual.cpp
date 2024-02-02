#include<iostream>
using namespace std;


class Base
{
    public:
        int i,j,k;

        void fun()  //concrete method
        {
            cout<<"Inside Base fun()\n";
        }

        virtual void gun()  //concrete method
        {
            cout<<"Inside Base gun()\n";
        }

        virtual int addition(int No1, int No2)=0; //abstract method


};

class Derived : public Base
{
     public:
        int a,b;

        
        void gun()  //concrete method
        {
            cout<<"Inside Derived gun()\n";
        }

        virtual void sun()  //concrete method
        {
            cout<<"Inside Derived sun()\n";
        }

        int addition(int No1, int No2)  //concrete method
        {
            return No1+No2;
        }
};


int main()
{
    //Base bobj; Error

    Base *bp= new Derived;

    bp->fun();
    bp->gun();

    int Ret=0;
    Ret = bp->addition(10,11);
    cout<<"Addition is: "<<Ret<<"\n";


    return 0;
}