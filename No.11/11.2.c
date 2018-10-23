#include<stdio.h>
#define SIZE 8
void func(char *st,int n);
int main(void)
{
	char ch[20];
	int i;
	
	printf("Enter a string:\n");	
	func(ch,SIZE);
	puts(ch);
		
	return 0;
} 
void func(char *st,int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
		*st=getchar();
		if(*st==' '||*st=='\t'||*st=='\n')
			{
				*st='\0';
				break;
			}
		st++;
	}
	*st='\0';
}
