#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j,k;

       virtual  void fun()//1000
        {cout<<"Inside Base fun\n";}//definition
          
        virtual void gun()//2000
        {cout<<"Inside Base gun\n";}//definition
        
        void sun()//3000
        {cout<<"Inside Base sun\n";}//definition
        
        void run()//4000
        {cout<<"Inside Base run\n";}//definition

};

class Derived : public Base
{
    public:
        int a,b;

        virtual void gun()//5000
        {cout<<"Inside Derived gun\n";}//Redefinition

        void run()//6000
        {cout<<"Inside Derived run\n";}//Redefinition

        virtual void mun()//6000
        {cout<<"Inside Derived mun\n";}//definition
};

int main()
{
    cout<<"Size of Base\t"<<sizeof(Base)<<"\n";
    cout<<"Size of Derived\t"<<sizeof(Derived)<<"\n";
    
     Base *bp = new Derived;
     
     bp->fun();
     bp->gun();
     bp->sun();
     bp->run();
    // bp->mun(); //Error

    return 0;
}