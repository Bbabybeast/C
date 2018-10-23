#include<stdio.h>
int main(void)
{
	int i[8];
	int t;
	
	i[0]=1;
	for(t=1;t<8;t++)
	{
		i[t]=i[t-1]*2;
	}
	t=0;
	do
		printf("%5d",i[t++]);
	while(t<8);
	
	return 0;
}
