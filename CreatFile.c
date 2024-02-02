#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int Fd = 0;

    Fd = creat("Marvellous.txt",0777);

    if(Fd != -1)
    {
        printf("File is successfully created with Fd: %d.\n",Fd);
    }
    return 0;
}