#include "public.h"

int main(){
	FILE *fp;
	fp=fopen("./test2.txt","w");
	printf("file fd=%d\n",fp->_fileno);
	fclose(fp);
	return 0;
}
