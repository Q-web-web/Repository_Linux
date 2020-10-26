#include "public.h"

int main()
{
	FILE *fp;
	int fd;
	fp=fopen("./public.h","r");
	fd=fcntol(fp);
	printf("fd=%d\n",fd);
	return 0;
}
