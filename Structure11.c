#include<stdio.h>


struct Demo
{
    int i;
    char ch;
    float f;
    double  d;
};

int main()
{
    struct Demo obj;
    printf("The size of object :  %d\n",sizeof(obj));

    return 0;
}