#include<stdio.h>
#define BASE 10
#define BASE_TIME 40
#define OVERTIME 1.5
#define TAX_300 0.15
#define TAX_450 0.2
#define TAX_REMAIN 0.25
int main(void)
{
	float t;
	float all,tax,income;
	
	printf("Enter your work hours :");
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
	
	return 0; 
}
