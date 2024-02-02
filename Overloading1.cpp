#include<iostream>
using namespace std;

class Demo
{
    public:
    int Addition(int A,int B)
    {
        int Ans=0;
        Ans=A+B;
        return Ans;
    }
    int Addition(int A,int B,int C)
    {
        int Ans=0;
        Ans=A+B+C;
        return Ans;
    }
    float Addition(float A, float B)
    {
        float Ans=0.0f;
        Ans=A+B;
        return (float) Ans;
    }
};

int main()
{

    Demo obj;
    int i=10,j=20,k=30,Ret=0;
    
    float p=90.93f,q=43.60f,fRet=0.0f;

    fRet=(float)obj.Addition(p,q);
    cout<<"Addiiton:"<<fRet<<"\n";

    Ret=obj.Addition(i,j);
    cout<<"Addiiton:"<<Ret<<"\n";

    Ret=obj.Addition(i,j,k);
    cout<<"Addiiton:"<<Ret<<"\n";

    return 0;
}