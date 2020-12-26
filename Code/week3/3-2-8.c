/**/
#include "ch2.h"
int main(void){
	int fd;
	FILE *fp;
	fd=open("./test1.txt",	O_RDWR);
	fp=fdopen(fd,"w+");
	//fwrite("hello world",1,11,fp);
	fprintf(fp,"hello world!");
	fclose(fp);
	return 0;
}
