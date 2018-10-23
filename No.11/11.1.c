#include<stdio.h>
#define SIZE 8
void func(char *st,int n);
int main(void)
{
	char ch[20];
	int i;
	
	printf("Enter a string:\n");	
	func(ch,SIZE);
	for(i=0;i<SIZE;i++)
		putchar(ch[i]);
		
	return 0;
} 
void func(char *st,int n)
{
	int i;
	
	for(i=0;i<n;i++)
		*st++=getchar();
}
