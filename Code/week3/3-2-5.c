/*通过main函数参数将字符串放到文件中*/
/*使用fwrite版本*/
#include"ch2.h"
int main(int argc,char* argv[]){
	FILE *fp;
	int i;
	if((fp = fopen("./test1.txt","w")) == NULL){
		perror("open failed!\n");
	}
	for(i=1;i<argc;i++){
		fwrite(argv[i],1,strlen(argv[i]),fp);
		fwrite(" ",1,1,fp);
		if(i==1) printf("content is");
		printf(" %s",argv[i]);
	}
	fwrite("\n",1,1,fp);
	printf("\n");
	fclose(fp);
	return 0;
}
