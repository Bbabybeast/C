#include<stdio.h>
#define SINGLE 17850
#define HOLDER 23900
#define MARRIED 29750
#define DIVORCED 14875
float func(int n,float i);
int main(void)
{
	float income,tax;
	int i;
	 
	printf("Enter your income:");
	scanf("%f",&income);
	printf("Enter your tax type: 1)single;	2)householder;	3)married;	4)divorced\n");
	scanf("%d",&i);
	while(i<5)
	{
		switch(i)
		{
			case 1:
				tax=func(SINGLE,income);
				printf("Your tax is :%f\n",tax);
				break;
			case 2:
				tax=func(HOLDER,income);
				printf("Your tax is :%f\n",tax);
				break;
			case 3:
				tax=func(MARRIED,income);
				printf("Your tax is :%f\n",tax);
				break;
			case 4:
				tax=func(DIVORCED,income);
				printf("Your tax is :%f\n",tax);
				break;
		}
	printf("Enter your income:");
	scanf("%f",&income);
	printf("Enter your tax type: 1)single;	2)householder;	3)married;	4)divorced\n");
	printf("Enter 5 or more than to quit.");
	scanf("%d",&i);
	}
	printf("Done....\n");
	
	return 0;
}
float func(int n,float i)
{
	float tax;
	
	if(i<=n)
		tax=i*0.15;
	else
		tax=n*0.15+(i-n)*0.28;
	
	return tax;
}
