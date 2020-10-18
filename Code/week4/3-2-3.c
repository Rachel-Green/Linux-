#include "ch2.h"

int main()
{
	FILE *fp;
	char buf[80];
	int ret;
	memset(buf,0,sizeof(buf));
	if((fp=fopen("./test.txt","w"))==NULL)
		perror("open failed!");
	fgets(buf,sizeof(buf),stdin);
	printf("Content is : %s\n", buf);

	ret = fwrite(buf,1,sizeof(buf),fp);// 一次写一个字节
	// ret = fwrite(buf,sizeof(buf),1,fp);// 一次写sizeof(buf)个字节
	
	printf("%d\n", ret);
	fclose(fp);
	return 0;
}