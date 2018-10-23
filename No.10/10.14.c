#include<stdio.h>
#define LINE 3
#define ROW 5
void enter(int r,double [][r]);
double aver_line(double []);
double aver(int r,double [][r]);
double max(int r,double [][r]);
void output(int r,double [][r]);
int main(void)
{
	double input[LINE][ROW];
	
	enter(ROW,input);
	output(ROW,input);

	
	return 0;
}

void output(int r,double input[][r])
{
	int i;
	double average,maximum;
	
	average=aver(ROW,input);
	maximum=max(ROW,input);
	for(i=0;i<3;i++)
		printf("Average of NO.%d group is :%.2f\n",i,aver_line(input[i]));
	printf("Average of all the number is :%.2f\n",average);
	printf("The maximum of all the number is :%.2f\n",maximum);
}
void enter(int r,double target[][r])
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

double aver(int r,double target[][r])
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

double max(int r,double target[][r])
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
