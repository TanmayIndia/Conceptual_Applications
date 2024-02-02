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
    Demo *ptr2 = (Demo *) malloc(sizeof(Demo));

    ptr2->display();

    free(ptr2);
   
    return 0;
}

