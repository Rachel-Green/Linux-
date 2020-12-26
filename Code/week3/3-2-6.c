/*通过main函数参数将字符串放到文件中*/
/*使用fprintf版本*/
#include"ch2.h"
int main(int argc,char* argv[]){
	FILE *fp;
	int i;
	if((fp = fopen("./test1.txt","w")) == NULL){
		perror("open failed!\n");
	}
	for(i=1;i<argc;i++){
		fprintf(fp,"%s",argv[i]);
		if(i!=argc-1) fprintf(fp," ");
		if(i==1) printf("content is:");
		printf("%s",argv[i]);
		if(i!=argc-1) printf(" ");
	}
	fprintf(fp,"\n");
	printf("\n");
	fclose(fp);
	return 0;
}
