#include<stdio.h>
void chline(char,int,int);
int main(void)
{
	int line,row;
	char ch;
	
	printf("Enter the charactor:");
	scanf("%c",&ch);
	printf("Enter the number of line:");
	scanf("%d",&line);
	printf("Enter the number of row:");
	scanf("%d",&row);
	chline(ch,line,row);
	
	return 0;
}

void chline(char ch,int i,int j)
{
	int n,m;
	
	for(n=1;n<=i;n++)
	{
		for(m=1;m<=j;m++)
			printf("%c",ch);
		printf("\n");
	}
	
}
