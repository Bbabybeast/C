#include<stdio.h>
void chline(char,int,int);
int main(void)
{
	int row,line;
	char ch;
	
	printf("Enter the charactor:");
	scanf("%c",&ch);
	printf("Enter the number of row:");
	scanf("%d",&row);
	printf("Enter the number of line:");
	scanf("%d",&line);
	chline(ch,row,line);
	
	return 0;
}

void chline(char ch,int i,int j)
{
	int n,m;
	
	for(n=1;n<=j;n++)
	{
		for(m=1;m<=i;m++)
			printf("%c",ch);
		printf("\n");
	}
	
}
