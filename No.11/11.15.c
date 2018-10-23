#include<stdio.h>
#define SIZE 40
int ato(char *);
char *s_gets(char *,int n);
int main(void)
{
	char ch[SIZE];
	int t;
	
	printf("Enter your integer:\n");
	s_gets(ch,SIZE);
	t=ato(ch);
	printf("%d",t);
	
	return 0;
}

int ato(char *ar)
{
	int i,t,n;
	
	if(!isdigit(*ar))
		return 0;
	for(i=0;isdigit(*(ar+i));i++)
		continue;
	for(t=0,n=0;n<i;n++)
		t=10*(t+*(ar+n)-48);
	
	return t/10;
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
