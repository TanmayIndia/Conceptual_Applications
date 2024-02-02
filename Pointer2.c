#include<stdio.h>

int main()
{
    int No=11;

    int *ip=&No;

    printf("No is: %d\n", No);//11
    printf("address of No: %d\n",&No);
    printf("Size of No: %d\n",sizeof(No));
    printf("%d\n",ip);
    printf("%d\n",&ip);
    printf("*ip %d\n",*ip);
    printf("Size of ip %d\n",sizeof(ip));
    return 0;    
}