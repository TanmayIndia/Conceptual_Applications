#include<stdio.h>
//Post decrement
int main()
{
    int i = 10,No=0;

    No= i--;
    printf("%d\n",No); //10
    printf("%d\n",i); //9
    return 0;
}