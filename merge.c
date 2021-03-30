#include <stdio.h>
#include <fcntl.h>

int main()
{
	char c;
	int fd1, fd2, fd3;
	char filename1[20],filename2[20],filename3[20];

	gets(filename1);
	fd1 = open(filename1,O_CREAT|O_RDWR,0751);

	gets(filename2);
        fd2 = open(filename2,O_CREAT|O_RDWR);

	gets(filename3);
        fd3 = open(filename3,O_CREAT|O_RDWR);

	while(read(fd2,&c,1)!=0)
		write(fd1,&c,1);
	while(read(fd3,&c,1)!=0)
		write(fd1,&c,1);

	close(fd1);
	close(fd2);
	close(fd3);
	
}
