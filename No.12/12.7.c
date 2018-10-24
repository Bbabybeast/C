#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 100
void roll_n_dice(int roll,int dice,int sides,int *);
int main(void)
{
	int ar[SIZE];
	int dice,roll;
	int sides;
	int status;
	
	srand((unsigned int) time(0));
	printf("Enter the number of sets; enter q to stop :");
	while(scanf("%d",&roll)==1)
	{
		printf("How many sides and how many dice?");
		while(scanf("%d%d",&sides,&dice)==2)
		{
			roll_n_dice(roll,dice,sides,ar);
			printf("Here are %d sets of %d %d-sided throws.\n",roll,dice,sides);
			for(status=0;status<roll;status++)
			{
				printf("%3d",ar[status]);
				if((status+1)%15==0)
					printf("\n");
			}
			printf("\nHow many sets? Enter q to stop:");
		}
	}
	
	return 0;
}

void roll_n_dice(int r,int sides,int dice,int ar[])
{
	int i,k;
	int d;
	int total;
	
	for(i=0;i<r;i++)
	{
		ar[i]=0;
		for(d=0;d<dice;d++)
		{
			k=rand()%sides+1;
			ar[i]+=k;
		}
	}
}
