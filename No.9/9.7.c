#include<stdio.h>
int func(char);
int main(void)
{
	char ch;
	int n=0;
	
	while((ch=getchar())!=EOF)
	{
		printf("%4d",func(ch));
		n++;
		if(n%10==0)
			printf("\n");
	}
}
int func(char c)
{
	int i;
	
	i=c;
	if(i>=65&&i<=90)
	{
		return i-64;
	}
	else if(i>=97&&i<=122)
		return i-96;
	else
		return -1;
}
