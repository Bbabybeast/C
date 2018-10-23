#include<stdio.h>
float get_number(void);
void menu(void);
int main(void)
{
	float x,y;
	char i,ch;
	
	menu();
	while((i=getchar())!='q')
	{	
		if(i=='a'||i=='s'||i=='m'||i=='d')
		{//printf("%c",i);
			while(getchar()!='\n')
					continue;
			printf("Enter first number:");
			x=get_number();
		//printf("%f",x);
		//printf("%c",i);
			printf("Enter second number:");
			y=get_number();
		//printf("%f",y);
		//printf("%c",i);
			switch(i)
			{
				case 'a':
					printf("%.2f + %.2f = %.2f\n",x,y,x+y);
					menu();
					break;
				case 's':
					printf("%.2f - %.2f = %.2f\n",x,y,x-y);
					menu();
					break;
				case 'm':
					printf("%.2f * %.2f = %.2f\n",x,y,x*y);
					menu();
					break;
				case 'd':
					while(!y)
					{
						printf("Enter a number other than 0:");
						scanf("%f",&y);
					}
					while(getchar()!='\n')
						continue;
					printf("%.2f / %.2f = %.2f\n",x,y,x/y);
					menu();
					break;
				}
		}
		else
		{
			printf("Enter the correct option please:\n");
			while(getchar()!='\n')
				continue;	
		}

	
	}
	printf("Bye.\n");
	
	return 0;
}

float get_number(void)
{
	float t;
	char ch;
	
	while(scanf("%f",&t)!=1)
	{
		while((ch=getchar())!='\n')
			putchar(ch);
		printf(" is not an number.\n");	
		printf("Please enter a number, such as 2.5, -1.78E8, or 3:"); 
	}
	while(getchar()!='\n')
		continue;
	
	return t;
}

void menu(void)
{
	printf("Enter the operation of your choice:\n");
	printf("a.add				s.subtract\n");
	printf("m.multiply			d.divide\n");
	printf("q.quit\n");
	
}
