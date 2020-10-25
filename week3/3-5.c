#include "public.h"

int main(){
	FILE *fp;
	char buf[80];
	int ret;
	memset(buf,0,sizeof(buf));
	if((fp=fopen("./test1.txt","w"))==NULL)
		perror("open failed!\n");
	printf("Input the String you want to save to the file:\t");
	fgets(buf,sizeof(buf),stdin);
	printf("Content is %s. The size of the stream is %ld sizes.\n",buf,sizeof(buf));
	ret=fwrite(buf,1,sizeof(buf),fp);
	printf("Actual writing number of item is %d\n",ret);

	fclose(fp);
	return 0;
}
