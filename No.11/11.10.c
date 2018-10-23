#include<stdio.h>
#include<string.h>
#define SIZE 40
char * s_gets(char *st,int n);
void no_space(char *);
int main(void)
{
	char ch[SIZE];
	
	printf("Enter the string(enter empty line to quit):\n");
	while(*s_gets(ch,SIZE)!='\0')
	{
		no_space(ch);
		if(ch)
			puts(ch);
		printf("Enter next string(enter empty line to quit):\n");
	}
}

void no_space(char ch[])
{
	int i,count;
	
	for(i=0,count=0;i<strlen(ch);i++,count++)
	{
		if(ch[i]==' ')
			i++;
		ch[count]=ch[i];
	}
	for(;count<strlen(ch);count++)
		ch[count]='\0';
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
