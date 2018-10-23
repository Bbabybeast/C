#include<stdio.h>
int critic(int);
int main(void)
{
	int units;
	int t;
	
	printf("How many pounds to a firkin of butter?\n");
	scanf("%d",&units);
	t=units;
	while (t!=56)
		t=critic(units);
	printf("You must have looked it up!\n");
	
	return 0;
}

int critic(int i)
{
	printf("No luck, my friend. Try again.\n");
	scanf("%d",&i);
	
	return i; 
} 
