#include<stdio.h>
char get_first(void);
int main(void)
{
	char ch;
	
	while((ch=get_first())!=EOF)
		putchar(ch);
	
	return 0;
}
char get_first(void)
{
	int ch;
	
	while(isspace(ch=getchar()))
		continue;
	while(getchar()!='\n')
		continue;
		
	return ch;
}
