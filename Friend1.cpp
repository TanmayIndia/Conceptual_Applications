#include<iostream>
using namespace std;

class Demo
{
    public:
    int i;
    private:
    int j;
    protected:
    int k;

    public:
    Demo()
    {
        i=10;
        j=20;
        k=30;
    }
};

void Display()
{
    Demo obj;
    cout<<"Value of i\n"<<obj.i<<"\n";
    cout<<"Value of j\n"<<obj.j<<"\n";
    cout<<"Value of k\n"<<obj.k<<"\n";
}
int main()
{

    Display();
    return 0;

}