#include<stdio.h>

int main()
{
    int Std=0;

    printf("Primary school Portal\n");

    printf("Enter your division\n");
    scanf("%d",&Std);
    //If else if ladder
    if(Std==1)
    {
        printf("Your exam is at 1 Pm.\n");
    }
    else if(Std==2)
    {
        printf("Your exam is at 2 Pm.\n");
    }
     else if(Std==3)
    {
        printf("Your exam is at 3 Pm.\n");
    }
     else if(Std==4)
    {
        printf("Your exam is at 4 Pm.\n");
    }
    else
    {
        printf("Invalid Standard\n");
    }
    return 0;
}