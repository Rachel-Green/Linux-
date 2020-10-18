#include "ch2.h"

int main()
{
	FILE *fp;
	char buf[80];
	memset(buf,0,sizeof(buf));
	fp = fopen("./test.txt","a+");
	fputs("\tappending new information!",fp);
	fp = freopen("./test.txt", "r", fp);
	fgets(buf,sizeof(buf),fp);
	printf("Content of file : %s\n", buf);
	fclose(fp);
	return 0;
}