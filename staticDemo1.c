#include<stdio.h>

void Fun()
{
    static int i=10;
    i++;
    printf("i: %d\n",i);
}
int main()
{
    int no=11;

    Fun();
    Fun();
    Fun();
    
    return 0;
}