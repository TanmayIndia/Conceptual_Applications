#include<iostream>
using namespace std;

int AdditionI(int no1, int no2)
{
    int ans = 0; 
    ans = no1+no2;
    return ans;
}

float AdditionF(float no1, float no2)
{
    float ans = 0.0; 
    ans = no1+no2;
    return ans;
}

double AdditionD(double no1, double no2)
{
    double ans = 0.0; 
    ans = no1+no2;
    return ans;
}

int main()
{
    int iRet = 0;
    float fRet = 0.0;
    double dRet = 0.0;

    iRet = AdditionI(11,12);
    fRet = AdditionF(11.0f, 12.0f);
    dRet = AdditionD(11.0,12.0);

    cout<<iRet<<endl;
    cout<<fRet<<endl;
    cout<<dRet<<endl;

    return 0;
}