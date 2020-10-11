#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <string.h>

int main()
{
	int cnt=0;
	while(1){
		char name[64];
		snprintf(name,sizeof(name),"%d.txt",cnt);
		int fd = creat(name,0644);
		sleep(10);
		cnt++;
	}
	return 0;
}
