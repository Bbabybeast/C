#include<stdio.h>
float func(float n,float m);
int main(void)
{
	float p, q;
	printf("Enter the number:");
	while (scanf("%f%f", &p, &q) == 2)
	{
		printf("The result is :%f\n",func(p,q));
		printf("Enter next value(enter q to quit):");
	}
	printf("Done!");
	return 0;
}
float func(float n,float m)
{
	float t;
	
	t=(n-m)/(n*m);
	
	return t;
}
