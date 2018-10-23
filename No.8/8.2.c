#include<stdio.h>
int main(void)
{
	char ch;
	int i,t,n=0;
	
	while((ch=getchar())!=EOF)
	{
		if(ch<32)
		{	
			if(ch=='\n')
			{
				printf("^%c-%d\n",ch+64,ch);
				n=0;
			}
			else
			{	
				printf("^%c-%d  ",ch+64,ch);
				n++;
			}
		}
		else
		{
			printf("%c-%d  ",ch,ch);
			n++;
		}
		if(n%10==0)
			printf("\n");
	}
	
	return 0;
}
