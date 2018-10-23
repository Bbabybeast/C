#include<stdio.h>
int main(void)
{
	char ch;
	int i=0;
	
	ch=getchar();
	while(ch!='#')
	{
		if(ch=='.')
		{
			putchar('!');
			i++;
		}
		else if(ch=='!')
		{
			putchar(ch);
			putchar(ch);
			i++;
		}
		else
			putchar(ch);
		ch=getchar();
	}
	printf("\nThe times of change is:%d",i);
	
	return 0;
}
