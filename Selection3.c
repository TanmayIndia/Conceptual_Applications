#include<stdio.h>

int main()
{
    int Std=0;

    printf("Primary school Portal\n");

    printf("Enter your division\n");
    scanf("%d",&Std);
   
   switch(Std)
   {
    case 1:
    printf("Your exam is at 1 PM\n");
    break;

     case 2:
    printf("Your exam is at 2 PM\n");
    break;
    
     case 3:
    printf("Your exam is at 3 PM\n");
    break;
     
     case 4:
    printf("Your exam is at 4 PM\n");
    break;
    
     default:
    printf("Invalid Standard\n");
    break;
   }
    return 0;
}