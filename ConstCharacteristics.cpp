#include<iostream>
using namespace std;

class Demo
{
  public:
    int i;
    const int j;
    const int k;

    Demo(int a, int b, int c): j(b), k(c)//Parametrised constructor
    {
      i=a;
     // j=b;//NA
     // k=c;//NA
    }
};

int main()
{
    Demo obj(11,21,51);
      
      cout<<"Value of i\n"<<obj.i<<"\n";
        cout<<"Value of j\n"<<obj.j<<"\n";
          cout<<"Value of k\n"<<obj.k<<"\n";
    
     obj.i++;
     //obj.j++;
     //obj.k++;
    return 0;

}