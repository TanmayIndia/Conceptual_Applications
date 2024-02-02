#include<stdio.h>
//Post increment
int main()
{
    int i = 10,No=0;

    No=i++;
    printf("%d\n",No); //10
    printf("%d\n",i); //11
    return 0;
}