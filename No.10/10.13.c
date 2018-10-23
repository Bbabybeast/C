#include<stdio.h>
#define LINE 3
#define ROW 5
void enter(double [][ROW]);
double aver_line(double []);
double aver(double [][ROW]);
double max(double [][ROW]);
void output(double [][ROW]);
int main(void)
{
	double input[LINE][ROW];
	
	enter(input);
	output(input);

	
	return 0;
}

void output(double input[][ROW])
{
	int i;
	double average,maximum;
	
	average=aver(input);
	maximum=max(input);
	for(i=0;i<LINE;i++)
		printf("Average of NO.%d group is :%.2f\n",i,aver_line(input[i]));
	printf("Average of all the number is :%.2f\n",average);
	printf("The maximum of all the number is :%.2f\n",maximum);
}
void enter(double target[][ROW])
{	
	int i;
	
	printf("Enter first group of numbers:");
	for(i=0;i<ROW;i++)
		scanf("%lf",target[0]+i);
	printf("Enter second group of numbers:");
	for(i=0;i<ROW;i++)
		scanf("%lf",target[1]+i);
	printf("Enter third group of numbers:");
	for(i=0;i<ROW;i++)
		scanf("%lf",target[2]+i);	
}

double aver_line(double target[])
{
	int i;
	double sum;
	
	for(i=0,sum=0;i<ROW;i++)
		sum+=*(target+i);
	
	return sum/ROW;
}

double aver(double target[][ROW])
{
	int i,j;
	double sum,total;
	
	for(i=0,total=0;i<LINE;i++)
	{
		for(j=0,sum=0;j<ROW;j++)
			sum+=*(*(target+i)+j);
		total+=sum;
	}
	
	return total/(LINE*ROW);
}

double max(double target[][ROW])
{
	int i,j;
	double max;
	
	for(i=0,max=target[0][0];i<LINE;i++)
	{
		for(j=0;j<ROW;j++)
		{
			if(max<target[i][j])
				max=*(*(target+i)+j);
		}
	}
	
	return max;
}
