#include<stdio.h>
void copy(int n,int m,double target[][m],double source[][m]);
void display(int n,int m,double target[][m],double source[][m]);
int main(void)
{
	int i,j;
	
	i=3;
	j=5;
	double source[3][5]={{4.3,4.3,4.3,3.0,2.0},{8.5,8.2,1.2,1.6,2.4},{9.1,8.5,6.7,4.3,2.1}};
	double target1[i][j];
	copy(i,j,target1,source);
	display(i,j,target1,source);
	
	return 0;
}

void copy(int n,int m,double target[][m],double source[][m])
{
	int i,j;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			*(*(target+i)+j)=*(*(source+i)+j);
	}
}

void display(int n,int m,double target[][m],double source[][m])
{
	int i,j;
	
	printf("Target array is :\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			printf("%5.2f",*(*(target+i)+j));
		printf("\n");
	}
	printf("Source array is :\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			printf("%5.2f",*(*(source+i)+j));
		printf("\n");
	}
	
}
