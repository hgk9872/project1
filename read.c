#include <stdio.h>
#include <fcntl.h>

int main()
{
	char c;
	int n, offset, bn, fd;
	char filename[20];

	gets(filename);
	fd = open(filename, O_RDONLY);

	scanf("%d", &offset);
	scanf("%d", &bn);

	n=0;
	while(n++<offset)
		read(fd,&c,1);
	
	n=0;
	while(n++<bn){
		if(read(fd,&c,1)==0)
			break;
		else write(1,&c,1);
	}

	close(fd);
}
