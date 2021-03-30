#include <stdio.h>
#include <fcntl.h>
#include <string.h>

int main()
{
        char c;
        int i, offset, fd;
        char filename[20];
        char buffer[100], data[100];

        printf("filename: ");
        gets(filename);
        fd = open(filename, O_RDWR|O_CREAT);

        scanf("%d%*c", &offset);
        gets(data);

        for(i=0 ; i<offset ; i++)
                read(fd,&c,1);

	read(fd,buffer,100);

	lseek(fd,strlen(data),0);
	write(fd,data,strlen(data));
	write(fd,buffer,strlen(buffer));

        close(fd);
}

