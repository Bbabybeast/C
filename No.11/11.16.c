#include<stdio.h>
#include<string.h>
#define SIZE 40
void upper(char *);
void lower(char *);
int main(int argc,char *argv[])
{
	char ch[SIZE];
	
	while(fgets(ch,SIZE,stdin)!=NULL)
	{
		if(argc<2)
			fputs(ch,stdout);
		else
		{
			if(argv[1][1]=='p')
				fputs(ch,stdout);
				else if(argv[1][1]=='u')
				{
					upper(ch);
					fputs(ch,stdout);
				}
				else if(argv[1][1]=='l')
				{
				
					lower(ch);
					fputs(ch,stdout);
				}
		}
	}
	
	return 0;
}

void upper(char ar[])
{
	int i;
	
	for(i=0;i<strlen(ar);i++)
	{
		if(isalpha(ar[i]))
		{
			if(islower(ar[i]))
				*(ar+i)-=32;
		}
	}
	
}

void lower(char ar[])
{
	int i;
	
	for(i=0;i<strlen(ar);i++)
	{
		if(isalpha(ar[i]))
		{
			if(isupper(ar[i]))
				*(ar+i)+=32;
		}
	}
	
}
