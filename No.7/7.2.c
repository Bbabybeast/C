#include<stdio.h>
int main(void)
{
	char ch;
	int i=0,t;
	
	ch=getchar();
	while(ch!='#')
	{	
		i+=1;
		printf("%c-%d\t",ch,ch);
		if(i%8==0)
			printf("\n");
		ch=getchar();
	}
	
	return 0;
}
