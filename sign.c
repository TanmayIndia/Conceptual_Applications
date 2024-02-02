#include<stdio.h>

int main()
{
    int i = 10;
    signed int j = 20;
    signed int k = -30;

    unsigned int a  = 40;
   // unsigned int a1  = -40; // NA

   int x = 10;
   short int y= 10;
   long int z=20;

   printf("%d\n",i);//10
   printf("%d\n",j);//20
   printf("%d\n",k);//-30
   printf("%d\n",a);//40
   
printf("Size of x is: %d \n",sizeof(x));//4
printf("Size of y is: %d \n",sizeof(y));//2
printf("Size of z is: %d \n",sizeof(z));//8(depends on compiler)

    return 0;
}