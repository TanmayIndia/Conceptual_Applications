#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iSize = 0;
    int *ptr = NULL;

    printf("Enter the size of array.\n");
    scanf("%d",&iSize);

    ptr = (int *) calloc(iSize,sizeof(int)); 

    ptr[0]=11;
    ptr[1]=11;
    ptr[2]=11;

    return 0;

    free(ptr);

}
//void * calloc(int No_Of_Elements, int Size_Of_Each_Element)