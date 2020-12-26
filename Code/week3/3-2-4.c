/*从键盘输入一个字符，然后写入文件中*/
#include"ch2.h"
int main(void){
	FILE *fp;
	char buf[80];
	int ret;
	memset(buf,0,sizeof(buf));
	if((fp = fopen("./test1.txt","w")) == NULL){
		perror("open failed!\n");
	}
	fgets(buf,sizeof(buf),stdin);
	/*这里使用strlen函数得到输入字符串的长度*/
	ret = strlen(buf);
	printf("actual reading %d chars from input device.Content is %s.\n",ret,buf);
	fwrite(buf,sizeof(char)*ret,sizeof(char),fp);
	fclose(fp);
	return 0;
}
