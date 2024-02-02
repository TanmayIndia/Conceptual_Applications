#include<stdio.h>

struct Demo
{
    int i;
    float f;
    int j;
};

int main()
{
    struct Demo obj1;
    struct Demo obj2;

    struct Demo *ptr=NULL;
    ptr =&obj2;

    obj1.i=85;
    obj1.f=68.4f;
    obj1.j=21;

    ptr->i=64;
    ptr->f=54.3f;
    ptr->j=64;

    printf("%d\n",obj1.i);
    printf("%d\n",ptr->i);

    return 0;

}