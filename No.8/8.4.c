#include<stdio.h>
int main(void)
{
	char ch;
	int i=0,t=0;
	int inword;//inword=1£ºÔÚµ¥´ÊÖÐ 
	
	while((ch=getchar())!=EOF)
	{
		
		if(isupper(ch)||islower(ch))
		{
			i++;
			inword=1;
		}
		if((ch==' '||ispunct(ch)||ch=='\n')&&inword==1)
		{
			t++;
			inword=0;
		}
	}
	printf("There are %d words and %d letters.\n",t, i);
	printf("The average number of letters of each word is %.2f.\n",(double)i/(double)t);
	
	return 0;
}
