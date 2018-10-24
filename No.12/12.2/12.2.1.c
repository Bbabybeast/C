#include <stdio.h>
#include "pe12-2a.h"
int last_mode;
float distance,fuel;

void set_mode(int t)
{
	
	
	if (t>1)
	{
		printf("Invalid mode specified. Mode %s used.\n",last_mode==0? "0(metric)":"1(US)");
		
	}
	else
		last_mode=t;
		
}

void get_info(void)
{

	if(last_mode==0)
	{
		printf("Enter distance traveled in kilometers:");
		scanf("%f",&distance);
		printf("Enter fuel consumed in liters:");
		scanf("%f",&fuel);
	}
	else
	{
		printf("Enter distance traveled in miles:");
		scanf("%f",&distance);
		printf("Enter fuel consumed in gallons:");
		scanf("%f",&fuel);
	}
}

void show_info(void)
{
	if(last_mode==0)
		printf("Fuel consumption is %.2f liters per 100 km.\n",fuel/distance*100);
	else
		printf("Fuel consumption is %.1f miles per gallon.\n",distance/fuel);
}
