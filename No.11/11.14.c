#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	double t=1.0;
	double n;
	int i;
	
	n=atof(argv[1]);
	i=atoi(argv[2]);
	for(;i>0;i--)
		t*=n;
	printf("n de i ci mi shi :%f",t);
	
	return 0;
}
