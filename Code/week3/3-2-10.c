#include"ch2.h"
int main(void){
	FILE *fp;
	char buf[80];
	memset(buf,0,sizeof(buf));
	fp=fopen("./test1.txt","a+");
	fputs("\tappend new information!",fp);
	fp=freopen("./test1.txt","r",fp);
	fgets(buf,sizeof(buf),fp);
	fclose(fp);
	return 0;
}
