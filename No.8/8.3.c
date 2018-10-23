#include<stdio.h>
int main(void)
{
	char ch;
	int low=0,up=0;
	
	while((ch=getchar())!=EOF)
	{
		if(islower(ch))
			low++;
		else if(isupper(ch))
			up++;
		else
			continue;
	}
	printf("The file has %d lowercase letters, %d uppercase letters.\n",low,up);
	
	return 0;
}
