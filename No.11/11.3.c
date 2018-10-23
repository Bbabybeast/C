#include<stdio.h>
#define SIZE 60
void func(char *st);
int main(void)
{
	char ch[20];
	
	func(ch);
	puts(ch);//—È÷§ 
	
	return 0;
}

void func(char *st)
{
	char word[SIZE];
	int i;
	
	fgets(word,SIZE,stdin);
	//fputs(word,stdout);
	for(i=0;i<SIZE;i++)
	{
		if(!isalpha(word[i]))
			continue;
		else
			break;
	}
	for(;i<SIZE;i++)
	{
		if(isalpha(word[i]))
		{
			*st=word[i];
			st++;
		}
		else
		{
			*st='\0';
			break;
		}
	}
}
