#include "ch2.h"

int main(int argc, char *args[])
{
	FILE *fp;
	
	if((fp=fopen("./test.txt","w"))==NULL)
		perror("open failed!");
	
	for(int i=1; i<argc; i++){
		// fprintf(fp, "%s", args[i]);// 与fwrite任选其一
		fwrite(args[i],1,strlen(args[i]),fp);
		printf("[%d] : \t %s \t%ldbyte\n",i, args[i], strlen(args[i]));
	}
	
	fclose(fp);
	return 0;
}