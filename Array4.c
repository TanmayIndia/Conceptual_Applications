#include<stdio.h>

int main()
{   
    int Arr[4]={55,66,77,88};
    
    printf("Base address of array: %d\n",Arr);//
    printf("Base address of first element of array: %d\n",&(Arr[0]));//
     printf("Base address of second element of array: %d\n",&(Arr[1]));//
    printf("First element is: %d\n",Arr[0]);
    printf("Size of whole array is: %d\n",sizeof(Arr));
    printf("Size of second member is: %d\n",sizeof(Arr[1]));

    return 0;
}