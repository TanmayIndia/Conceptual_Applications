#include<stdio.h>
//Pre decrement
int main()
{
    int i = 10,No=0;

    No= --i;
    printf("%d\n",No); //9
    printf("%d\n",i); //9
    return 0;
}