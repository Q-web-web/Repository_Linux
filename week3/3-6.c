#include "public.h"

int main(int argc,char *argv[]){
	int i;
	FILE *fp;

	if((fp=fopen("./test1.txt","w"))==NULL)
		perror("open failed!\n");
	for(i=1;i<argc;i++){
		fprintf(fp,"%s",argv[i]);
		printf("[%d]:\t %s \t%ld bytes\n",i,argv[i],strlen(argv[i]));
	}
	fclose(fp);
	return 0;
}
