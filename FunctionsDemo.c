#include<stdio.h>
#include<stdlib.h>

int Addition(int No1,int No2)
{
    int Ans=0;
    Ans= No1+No2;
    return Ans;

}

void main()
{
    int Value1=0, Value2=0, Ret=0;

    printf("Enter the first value: \n");
    scanf("%d",&Value1);

    printf("Enter the second value: \n");
    scanf("%d",&Value2);

    Ret=Addition(Value1,Value2);
    printf("Addition is:%d\n",Ret);

    exit(0);
}