#include<stdio.h>
int main(void)
{
	char ch,prev;
	int i=0;
	
	ch=getchar();
	if(ch!='#')
	{
		prev=ch;
		ch=getchar();
	}
	else
		printf("Done!\n");	
	while(ch!='#')
	{
		if(prev=='e'&&ch=='i')
		{
			i++;
			prev=ch;
		}	
		else
		{
			prev=ch;
		}
		ch=getchar();
	}
	printf("%d",i);
	
	return 0;
}
