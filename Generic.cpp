#include<iostream>
using namespace std;

template<class T>

T Addition(T no1, T no2)
{
    T ans; 
    ans = no1+no2;
    return ans;
}

int main()
{
    int iRet =0;
    float fRet = 0.0;
    double dRet = 0.0;

    iRet = Addition(11,12);
    fRet = Addition(11.0f, 12.0f);
    dRet = Addition(11.0,12.0);

    cout<<iRet<<endl;
    cout<<fRet<<endl;
    cout<<dRet<<endl;
    
    return 0;
}