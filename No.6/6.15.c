#include<stdio.h>
int main(void)
{
	char ch[255];
	int k,i=-1;
		
	do
		{
		i++;
		scanf("%c",&ch[i]);
		}
	while(ch[i]!='\n');
	
	for(k=i;k>=0;k--)
		printf("%c",ch[k]);
	printf("\nDone!");

	return 0;
}

