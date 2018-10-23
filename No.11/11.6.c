#include<stdio.h>
#define SIZE 40
_Bool is_within(char c,char *ch);
int main(void)
{
	char ch[SIZE],target;
	_Bool result;
	
	printf("Enter the string(enter ctrl+z to quit):\n");
	while(fgets(ch,SIZE,stdin)!=NULL)
	{
		printf("Enter the charactor:");
		scanf("%c",&target);
		result=is_within(target,ch);
		printf("%d\n",result);
		printf("Enter next string(enter ctrl+z to quit):\n");
		fgets(ch,SIZE,stdin);
	}
	
	return 0;
}

_Bool is_within(char target,char source[])
{
	int i;
	char *ptr;
	
	for(i=0;i<SIZE;i++)
	{
		if(source[i]==target)
			return 1;
	}
	return 0;
}
