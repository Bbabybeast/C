#include<stdio.h>
#define SIZE 50
int main(void)
{
	char ch;
	int word=0,upper=0,lower=0,number=0,point=0;
	int flag=0;
	
	while((ch=getchar())!=EOF)
	{
		if(isblank(ch)||ispunct(ch))
			flag=0;
		if(isalpha(ch)&&flag==0)
		{
			word+=1;
			flag=1;
		}
		if(islower(ch))
			lower+=1;
		if(isupper(ch))
			upper+=1;
		if(isdigit(ch))
			number+=1;
		if(ispunct(ch))
			point+=1;
	}
	printf("words: %d, upper: %d, lower: %d, punct: %d, digit: %d.\n",
			word, upper, lower, point, number);
            
    return 0;
}
