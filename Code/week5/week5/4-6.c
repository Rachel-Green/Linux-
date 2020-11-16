#include "ch3.h"

int main(){
	int d1;
	d1=open("./out.info",O_WRONLY | O_CREAT | O_TRUNC,0644);
	dup2(d1,1);
	printf("Redirect stdout file!\n");
	return 0;
}