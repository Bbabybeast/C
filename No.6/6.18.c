#include<stdio.h>
int main(void)
{
	int i,n;
	
	for(i=5,n=0;i<=150;n++)
	{
		i-=(n+1);
		i*=2;
		printf("He has %d friends in %d weeks\n",i,n);	
	}
	
	return 0;
}
