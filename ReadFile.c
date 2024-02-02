#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
    int Fd = 0, Ret= 0;
    char Arr[20] = {'\0'};

    Fd = open("Marvellous.txt",O_RDWR);

    Ret = read(Fd,Arr,10);

    printf("%d bytes gets read in the file\n", Ret);
    printf("Data is: %s\n", Arr);

    close(Fd);

    return 0;
}