#include<stdio.h>
#define SIZE 40
char *func(char ar[],char c);
int main(void)
{
	char ch[SIZE],target;
	char *result;
	
	printf("Enter the string(enter ctrl+z to quit):\n");
	while(fgets(ch,SIZE,stdin)!=NULL)
	{
		printf("Enter the charactor:");
		scanf("%c",&target);
		result=func(ch,target);
		printf("%p\n",result);
		printf("Enter next string(enter ctrl+z to quit):\n");
		fgets(ch,SIZE,stdin);
	}
	
	return 0;
}
char *func(char source[],char c)
{
	int i;
	char *ptr;
	
	for(i=0;i<SIZE;i++)
	{
		if(source[i]==c)
		{
			ptr=&source[i];
			return ptr;
		}
	}
	return NULL;
}
