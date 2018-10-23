#include<stdio.h>
#define ONE 8.75
#define TWO 9.33
#define THREE 10.00
#define FOUR 11.20
#define BASE_TIME 40
#define OVERTIME 1.5
#define TAX_300 0.15
#define TAX_450 0.2
#define TAX_REMAIN 0.25
void func(float BASE); 
int main(void)
{
	int i;
	float t,BASE;

	
	printf("******************************************************************\n");
	printf("Enter the number corresponeding to the desired pay rate or action:\n");\
	printf("1) $8.75/hr					2) $9.33/hr\n");
	printf("3) $10.00/hr					4) $11.20/hr\n");
	printf("5) $quit\n");
	printf("******************************************************************\n");
	
	scanf("%d",&i);
	while(i!=5)
	{
		switch(i)
		{
			case 1:
				BASE=ONE;
				printf("Your choice is:1) $8.75/hr\n");
				func(BASE);
				printf("Enter next option:");
				break;
			case 2:
				BASE=TWO;
				printf("Your choice is:2) $9.33/hr\n");
				func(BASE);
				printf("Enter next option:");
				break;
			case 3:
				BASE=THREE;
				printf("Your choice is:3) $10.00/hr\n");
				func(BASE);
				printf("Enter next option:");
				break;
			case 4:
				BASE=FOUR;
				printf("Your choice is:4) $11.20/hr\n");
				func(BASE);
				printf("Enter next option:");
				break;
			default:
				printf("Enter the correct option please:\n");
		}
		scanf("%d",&i);
	}
	printf("Quit...\n");
	
	return 0;
}
void func(float BASE)
{
	float t;		
	float all,tax,income;
	
	printf("Enter the work hours:\n");
	scanf("%f",&t);
	if(t<=BASE_TIME)//先计算工资总额 
		all=t*BASE;
	else
		all=BASE_TIME*BASE+(t-BASE_TIME)*OVERTIME*BASE;
	if(all<=300)//再计算税金 
		tax=all*TAX_300;
	else if(all<450)
		tax=300*TAX_300+(all-300)*TAX_450;
	else
		tax=300*TAX_300+150*TAX_450+(all-450)*TAX_REMAIN;
	income=all-tax;//最后计算净收入
	printf("The total wage bill is %.2f.\nThe taxes is %.2f.\nThe net income is %.2f\n",all,tax,income);
}
