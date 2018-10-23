#include<stdio.h>
int main(void)
{
	int ch;
	int i=0;
	
	while((ch=getchar())!=EOF)
	{
		i++;
	}
	printf("The file has %d charactors.\n",i);
	
	return 0;
 } 
