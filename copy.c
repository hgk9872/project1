#include <stdio.h>
#include <fcntl.h>

int main()
{
	char buf[10];
	int n, fd1, fd2;
	char filename1[20],filename2[20];

	printf("Enter the name of the file1: ");
	gets(filename1);
	fd1 = open(filename1,O_CREAT|O_RDWR);

	printf("Enter the name of the file2: ");
	gets(filename2);
	fd2 = open(filename2,O_CREAT|O_RDWR,0751);


	while(1){
		n=read(fd1,buf,10);
		if (n==10)
			write(fd2,buf,10);
		else{write(fd2,buf,n);
			break;
		}
	}


	close(fd1);
	close(fd2);
}
