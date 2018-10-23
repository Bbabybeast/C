/*guess.c --一个二分查找猜数字程序*/
#include<stdio.h>
int main(void)
{
	int guess=50;
	int low=0,up=100;
	char ch,response;
	
	printf("Pick an integer from 1 to 100.I will try to guess it\n");
	printf("Respond with a y if my guess is right and with an n if it is wrong.\n");
	printf("Uh...is your number %d(y/n)?\n",guess);
	while((response=getchar())!='y')
	{
		if(response=='n')
		{
			while(getchar()!='\n')
				continue; 
			printf("Well, is it bigger than %d?\n",guess);
			printf("Respond with a b if your number is bigger than my guess\n"
		 	"and with a s if is smaller than my guess.\n");
			ch=getchar();
			if(ch=='b')
			{	
				low=guess;
				guess=(guess+up)/2;
				while(getchar()!='\n')
					continue;
			//	getchar();
			}
			else if(ch=='s')
			{
				up=guess;
				guess=(guess+low)/2;
				while(getchar()!='\n')
					continue;
			//	getchar();
			}
			else
			{
				printf("Sorry, I understand only b or s.\n");
				while(getchar()!='\n')
					continue;
			}
			printf("Well, then, is it %d(y/n)?\n",guess);

		}
		else
		{
			printf("Sorry, I understand only y or n.\n");
			while(getchar()!='\n')
				continue;
		}	
	}
	
	printf("I knew I could do it!\n");
	
	return 0;
 } 
