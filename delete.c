#include <stdio.h>
#include <fcntl.h>
#include <string.h>

int main()
{
        char c;
        int i, offset, db, fd;
        char filename[20];
        char buf1[100], buf2[100], data[100];

        printf("filename: ");
        gets(filename);
        fd = open(filename, O_RDWR|O_CREAT);

        scanf("%d", &offset);
        scanf("%d", &db);

        read(fd,buf1,offset);

	for(i=0 ; i<db ; i++)
                read(fd,&c,1);

        i = read(fd,buf2,100);

        lseek(fd,offset,0);
	write(1,buf1,offset);
	write(1,buf2,i-1);

        close(fd);
}

