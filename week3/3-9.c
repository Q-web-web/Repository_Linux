#include "public.h"

int main()
{
	int fd;
	FILE *fp;
	fd=open("./test1.txt",O_RDWR);
	fp=fdopen(fd,"w");
	fprintf(fp,"test data %s\n","Hello world!");
	
	fclose(fp);
	return 0;
}
