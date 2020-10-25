#include "public.h"

int main(){
	FILE *fp;
	char buf[80];
	/*int ret;*/
	memset(buf,0,sizeof(buf));
	if((fp=fopen("./test1.txt","w"))==NULL)
		perror("open failed!\n");
	/*ret=*/
        fgets(buf,sizeof(buf),stdin);
	printf("Content is %s\n",buf);

	fclose(fp);
	return 0;
}
