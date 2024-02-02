#include<iostream>
#include<stdlib.h>
using namespace std;


class Demo
{
    
    int i,j,k;
 public:
    Demo()
    {
        cout<<"Contructor.\n";
    }
    ~Demo()
    {
        cout<<"Destructor.\n";

    }

    void display()
    {
        cout<<"Inside Display\n";
    }
};
int main()
{
    Demo obj1;

    obj1.display();

    Demo *ptr = new Demo();

    ptr->display();
    delete ptr;
   
    return 0;
}

