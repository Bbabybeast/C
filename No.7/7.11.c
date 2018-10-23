#include<stdio.h>
#define ARTICHOKE 2.05
#define BEET 1.15
#define CARROT 1.09
int main(void)
{
	char ch;
	float a,b,c;
	float sum_a=0,sum_b=0,sum_c=0,sum_t=0;//选购蔬菜的重量 
	float price,expense,discount,total;//订单费用，运费，折扣，总费用 
	
	printf("Enter the option:a.artichoke	b.beet	c.carrot(enter q to quit)\n");
	ch=getchar();
	while(ch!='q')
	{
		switch(ch)
		{
			case 'a':
				printf("Enter the weight of artichoke:");
				scanf("%f",&a);
				sum_a+=a; 
				printf("The total weight of artichoke:%.2f\n",sum_a);
				break;
			case 'b':
				printf("Enter the weight of beet:");
				scanf("%f",&b);
				sum_b+=b; 
				printf("The total weight of beet:%.2f\n",sum_b);
				break;
			case 'c':
				printf("Enter the weight of carrot:");
				scanf("%f",&c);
				sum_c+=c; 
				printf("The total weight of carrot:%.2f\n",sum_c);
				break;
		}
		printf("Enter next value:");
		ch=getchar();
	}
	price=sum_a*ARTICHOKE+sum_b*BEET+sum_c*CARROT;//计算订单总费用 
	sum_t=sum_a+sum_b+sum_c;
	if(price>=100)//计算折扣 
		discount=price*0.05;
	else
		discount=0;
	if(sum_t<=5)//计算运费和包装费 
		expense=6.5;
	else if(sum_t>5&&sum_t<=20)
		expense=6.5+14;
	else
		expense=6.5+14+(sum_t-20)*0.5;
	total=price-discount+expense;//计算所有的费用总和 
	printf("Artichoke selling price is %.2f $/pounds,you bought %.2f pounds,it cost %.2f dollars.\n",ARTICHOKE,sum_a,sum_a*ARTICHOKE);
	printf("Beet selling price is %.2f $/pounds,you bought %.2f pounds,it cost %.2f dollars.\n",BEET,sum_b,sum_b*BEET);
	printf("Carrot selling price is %.2f $/pounds,you bought %.2f pounds,it cost %.2f dollars.\n",CARROT,sum_c,sum_c*CARROT); 
	printf("Total cost of the order is %.2f.\n",price);
	printf("Discount of the order is %.2f.\n",discount);
	printf("Shipping and Handling Charges is %.2f.\n",expense);
	printf("The total cost is %.2f.\n",total);
	printf("Thank you!\n");
	
	return 0;
}
