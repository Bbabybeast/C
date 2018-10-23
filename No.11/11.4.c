#include<stdio.h>
#define SIZE 60
#define WORD 20
void func(char *st,int n);
int main(void)
{
	char ch[WORD];
	
	func(ch,WORD);
	puts(ch);//—È÷§ 
	
	return 0;
}

void func(char *st,int n)
{
	char word[SIZE];
	int i,count;
	
	fgets(word,SIZE,stdin);
	//fputs(word,stdout);
	for(i=0;i<SIZE;i++)
	{
		if(!isalpha(word[i]))
			continue;
		else
			break;
	}
	for(count=0;count<n&&isalpha(word[i]);count++,i++)
	{
		*st=word[i];
		st++;
	}
		*st='\0';
}

