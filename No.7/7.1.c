#include<stdio.h>
int main(void)
{
	char ch;
	int sp_count=0;
	int n_count=0;
	int o_count=0;
	
	ch=getchar();
	while(ch!='#')
	{
		if(ch==' ')
			sp_count++;
		else if(ch=='\n')
			n_count++;
		else
			o_count++;
		ch=getchar();
	}
	printf("space_count=%d,\\n_count=%d,other_count=%d",sp_count,n_count,o_count);
	
	return 0;
 } 
