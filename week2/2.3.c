#include "ch2.h"

int main()
{
	int ret;
	char buf[101];
	int fd;
	memset(buf,0,sizeof(buf));
	fd=open("./test.dat",O_CREAT|O_RDWR,0644);
	printf("New file description %d\n",fd);
	printf("%d: 2.2 is running!\n",getpid());
        ret=write(1,"Hello,Linux\n",12);
	printf("ret=%d\n",ret);

	sleep(10);
	printf("Please input data <=100:\n");
	fgets(buf,100,stdin);
	ret=write(fd,buf,sizeof(buf));
	printf("ret=%d\n",ret);
	exit(0);
}
