#include<stdio.h>
int main(void)
{
	int i[8];
	int t;
	printf("Enter 8 numbers:");
	for(t=0;t<8;t++)
	{
		scanf("%d",&i[t]);
	}
	for(t=0;t<8;t++)
	{
		printf("%5d",i[7-t]);
	}

	return 0;
}
