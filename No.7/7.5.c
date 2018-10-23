#include<stdio.h>
int main(void)
{
	char ch;
	int i=0;
	
	ch=getchar();
	while(ch!='#')
	{
		switch(ch)
			{case '.':	putchar('!');
						i++;
						break;
			 case '!':	putchar(ch);
			 			putchar(ch);
			 			i++;
			 			break;
			 default:	putchar(ch);
			}
		ch=getchar();
	}
	printf("\nThe times of change is:%d",i);
	
	return 0;
}
