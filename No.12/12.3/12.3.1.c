#include <stdio.h>
#include "pe12-3a.h"

int set_mode(int t,int last_mode)
{
	 
	if (t>1)
	{
		printf("Invalid mode specified. Mode %s used.\n",last_mode==0? "0(metric)":"1(US)");
		
	}
	else
		last_mode=t;
	
	return last_mode;
}

void get_info(int last_mode)
{
	float distance,fuel;
	
	if(last_mode==0)
	{
		printf("Enter distance traveled in kilometers:");
		scanf("%f",&distance);
		printf("Enter fuel consumed in liters:");
		scanf("%f",&fuel);
		printf("Fuel consumption is %.2f liters per 100 km.\n",fuel/distance*100);
	}
	else
	{
		printf("Enter distance traveled in miles:");
		scanf("%f",&distance);
		printf("Enter fuel consumed in gallons:");
		scanf("%f",&fuel);
		printf("Fuel consumption is %.1f miles per gallon.\n",distance/fuel);
	}
}

