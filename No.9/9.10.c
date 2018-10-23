#include<stdio.h>
void to_base_n(unsigned long num,int n);

int main(void)
{
	unsigned long number;
	int i;
	
	printf("Enter two integers (q to quit):\n");
	while(scanf("%lu%d",&number,&i)==2)
	{
		printf("Binary equivalent (base on %d):",i);
		to_base_n(number,i);
		putchar('\n');
		printf("Enter two intergers (q to quit):\n");
	}
	printf("Done...\n");
	
	return 0;
}

void to_base_n(unsigned long num,int n)
{
	int r;
	
	r=num%n;
	if(num>=n)
		to_base_n(num/n,n);
	printf("%d",r);
	
	return;
}
