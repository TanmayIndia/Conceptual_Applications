#include<stdio.h>

int main()
{
int No=0,Flag=0;

printf("Enter number:\n");
scanf("%d",&No);

Flag=No%2;
if(Flag==0)
{
printf("Even\n");
}
else
{
printf("Odd\n");
}

return 0;
}