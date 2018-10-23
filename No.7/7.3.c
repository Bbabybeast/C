#include<stdio.h>
int main(void)
{
	int i;
	int even_count=0,even_sum=0;
	int odd_count=0,odd_sum=0;
	
	scanf("%d",&i);
	while(i!=0)
	{
		if(i%2==0)
		{
			even_count++;
			even_sum+=i;
		}
		else
		{
			odd_count++;
			odd_sum+=i; 
		} 
		scanf("%d",&i);
	}
	printf("The count of even number is:%d,the average is:%.2f\n",even_count,(float)even_sum/even_count);
	printf("The count of odd number is:%d,the average is:%.2f",odd_count,(float)odd_sum/odd_count);
	
	return 0;
}
