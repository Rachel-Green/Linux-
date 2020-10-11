#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
	int ret;
	printf("2-2 is running!\n");
	ret=write(1,"Hello World!\n",13);
	sleep(100);
	exit(0);
}
