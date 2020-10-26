#include "public.h"

char buf1[]="abcdefghij";
char buf2[]="0123456789";
int main()
{
	int fd;
	if((fd=open("file.hole",O_WRONLY|O_CREAT,0644))<0)
		err_exit("Create Error!");
	if(write(fd,buf1,10)!=10)
                err_exit("Create Error!");
	if(lseek(fd,40,SEEK_SET)==-1)
                err_exit("Create Error!");
/*	if((write(fd,buf2,10)!=10)
                err_exit("Create Error!");*/
	return 0;
}
