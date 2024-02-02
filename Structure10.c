#include<stdio.h>
//singlee linear linked list
struct Demo
{
    int no;
    struct Demo *ptr;
};

int main()
{
    struct Demo obj1, obj2, obj3;
  
    obj1.no=45;
    obj2.no=232;
    obj3.no=354;   
   
   obj1.ptr=&obj2;
   obj2.ptr=&obj3;
   obj3.ptr=NULL;

   printf("%d\n",obj1.no);//45
   printf("%d\n",obj1.ptr->no);//232
   printf("%d\n",obj1.ptr->ptr->no);//354

    return 0;
}