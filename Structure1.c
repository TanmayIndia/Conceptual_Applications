#include<stdio.h>

struct Demo
{
    int no;
    float f;
    int x;
    float d;
};

int main()
{
    struct Demo obj;

    printf("Size of structure is %d\n", sizeof(obj));

    return 0;
}