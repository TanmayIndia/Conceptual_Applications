#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
    int Fd = 0, Ret= 0;
    char Arr[] = "Marvellous Infosystems";

    Fd = open("Marvellous.txt",O_RDWR);

    Ret = write(Fd,Arr,strlen(Arr));

    printf("%d bytes gets wrritten in the file\n", Ret);
   
    close(Fd);

    return 0;
}