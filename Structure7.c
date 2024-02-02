#include<stdio.h>


 struct Hello
    {
        int no;
        float d;
    };

struct Demo
{
    int i;
    float f;
    struct Hello hobj;
};

int main()
{
    struct Demo dobj;

    printf("Size of object is: %d\n",sizeof(dobj));//8 bytes

    return 0;
}