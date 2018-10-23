#include<stdio.h>
#include<string.h>
#define SIZE 40
#define SIZE2 40
char *s_gets(char *,int n);
char *string_in(char *,char *);
int main(void)
{
	char ch[SIZE],ch2[SIZE2];
	char *result;
	
	printf("Enter first string(enter ctrl+z to quit):\n");
	while(s_gets(ch,SIZE)!=NULL)
	{
		printf("Enter second string:");
		s_gets(ch2,SIZE2);
		result=string_in(ch,ch2);
		printf("%p\n",result);
		printf("Enter next string(enter ctrl+z to quit):\n");
	}
	
	return 0;
} 

char *string_in(char ar[],char ar2[])
{
	char *ptr;
	int i=0,count;
	while(i!=strlen(ar)-strlen(ar2)+1)
	{
		if(ar[i]==ar2[0])
		{
			ptr=ar+i;
			for(count=0;count<strlen(ar2)-1;count++)
			{
				if(*(ptr+count)!=*(ar2+count))
					break;
				else
					continue;
			}
			if(count==strlen(ar2)-1)
				return ptr;
		}
		i++;
	}
	
	return NULL;
}

char *s_gets(char *st,int n)
{
	char *ret_val;
	int i=0;
	
	ret_val=fgets(st,n,stdin);
	if(ret_val)
	{
		while (st[i]!='\n'&&st[i]!='\0')
			i++;
		if(st[i]=='\n')
			st[i]='\0';
		else
			while(getchar()!='\n')
				continue;
	} 
	
	return ret_val;
}
