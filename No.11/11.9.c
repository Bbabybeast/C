#include<stdio.h>
#include<string.h>
#define SIZE 40
void turn(char *);
char *s_gets(char *,int n);
int main(void)
{
	char ch[SIZE];
	
	printf("Enter the string(enter ctrl+z to quit):\n");
	while(s_gets(ch,SIZE)!=NULL)
	{
		turn(ch);
		if(ch)
		{
			puts(ch);
		}	
		printf("Enter next string(enter ctrl+z to quit)\n");
	}
	
	return 0;
}

void turn(char ch[])
{
	char re[SIZE];
	int i;
	
	for(i=0;i<strlen(ch);i++)
		re[i]=ch[strlen(ch)-i-1];
	for(i=0;i<strlen(ch);i++)
		ch[i]=re[i];
}

char *s_gets(char *st,int n)
{
	char *ret_val;
	int i=0;
	
	ret_val=fgets(st,n,stdin);
	if(ret_val)
	{
		while (st[i]!='\n'&&st[i]!='\0')
			i++;
		if(st[i]=='\n')
			st[i]='\0';
		else
			while(getchar()!='\n')
				continue;
	} 
	
	return ret_val;
}
