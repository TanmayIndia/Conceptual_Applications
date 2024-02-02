#include<stdio.h>
#include<conio.h>
#define MAX 10

struct book
{
char title[30];
char author[30];
int pages;
float price;
};

int main()
{
    struct book Library[MAX];
    int count=0,i;
    char ch;

    while(1)
    {
        printf("Enter the information of book %d:\n",count+1);
        printf("Enter the title of the book:\t");
        gets(Library[count].title);
        printf("Enter the author's name:\t");
        gets(Library[count].author);
        printf("Enter number of pages in the book:\t");
        scanf("%d",&Library[count].pages);\
        printf("Enter price of book:\t");
        scanf("%f",&Library[count].price);
        fflush(stdin);
        count++;
        if(count==MAX)
        {
            printf("Capacity is full\n");
            break;
        }
        else 
        {
            printf("Do you want to enter more(Y/N):\t");
            ch=getche();
            printf("\n");
            if(ch=='y'||ch=='Y')
                continue;
            
            else
                break;
        }

    } 

    printf("Following are the books in the library:\n\n");
    for(i=0;i<count;i++)
    printf("=====================================================================================");
    {
        printf("%s by %s: %d pages is of rupees %0.2f\n",Library[i].title,Library[i].author,Library[i].pages,Library[i].price);
    }
    printf("=====================================================================================");
    return 0;
}