#include<stdio.h>
#define SIZE 40
#define TAR 10
char *s_gets(char *,int n);
char *mystrncpy(char ar[],char arr[],int n);
int main(void)
{
	char source[SIZE],target[SIZE];
	char *result;
	int i,n;
	
	printf("Enter first string(enter ctrl+z to quit):\n");
	while(s_gets(source,SIZE)!=NULL)
	{
		printf("Enter the MAXIMUM :\n");
		scanf("%d",&n);
		getchar();
		result=mystrncpy(target,source,n);
		printf("%p\n",result);
		for(i=0;i<n;i++)
			printf("%c",*(result+i));
		printf("\nEnter next string(enter ctrl+z to quit):\n");
	}
	
	return 0;
}

char *mystrncpy(char target[],char source[],int n)
{
	int i;
	int count;
	for(i=0;i<n;i++)
	{
		if(source[i]=='\0')
			break;
		target[i]=source[i];
	}
	
	return target;
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
