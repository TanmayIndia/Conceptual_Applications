#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Arr[5];//Static
    float fValue=0.0f;//Static
    double Brr[5]; // Static

    int iSize = 0;
    int *ptr = NULL;

    printf("Enter the size of array.\n");
    scanf("%d",&iSize);

    ptr = (int *) malloc(iSize * sizeof(int)); 
    return 0;

    free(ptr);

}