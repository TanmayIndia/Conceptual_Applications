#include<iostream>
using namespace std;

int main()
{
    enum days{Sunday, Monday, Tuesday, Wednesday};

    cout<<Sunday<<"\n";
    cout<<Monday<<"\n";

    enum Months {January = 11, February = 21, March};

    cout<<January<<"\n";
    cout<<February<<"\n";
    cout<<March<<"\n";

    return 0;
}