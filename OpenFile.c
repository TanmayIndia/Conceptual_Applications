#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int Fd = 0;

    Fd = open("Marvellous.txt",O_RDWR);

    if(Fd != -1)
    {
        printf("File is successfully opened with Fd: %d.\n",Fd);
    }
    close(Fd);
    return 0;
}