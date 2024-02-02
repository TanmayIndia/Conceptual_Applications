#include<iostream>

namespace Marvellous
{
    void Display()
    {
        std::cout<<"Inside Display of Marvellous\n";
    }
}

namespace InfoSystems
{
    void Display()
    {
        std::cout<<"Inside Display of Infosystem\n";
    }
}

int main()
{
    Marvellous::Display();
    InfoSystems::Display();
    return 0;
}