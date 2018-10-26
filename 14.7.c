#include<stdio.h>
#include<string.h>
#define SIZE 20
#define LIST 12
struct info {
	int number;
	int assign;	/*assign=1表示座位已被预订 */
	char first[SIZE];
	char last[SIZE];
};

struct info list[LIST]={
	{1,0,"",""},
	{2,0,"",""},
	{3,0,"",""},
	{4,0,"",""},
	{5,0,"",""},
	{6,0,"",""},
	{7,0,"",""},
	{8,0,"",""},
	{9,0,"",""},
	{10,0,"",""},
	{11,0,"",""},
	{12,0,"",""},
};

void fun_a(struct info *pt);
void fun_b(struct info *pt);
void fun_c(struct info *pt);
int fun_d(struct info *pt);
int fun_e(struct info *pt);
void menu(void);

int main(void)
{
	char ch;
	
	menu();
	while((ch=getchar())>='a'&&ch<='f')
	{
		switch (ch)
		{
			case 'a':
				fun_a(list);
				break;
			case 'b':
				fun_b(list);
				break;
			case 'c':
				fun_c(list);
				break;
			case 'd':
				while(getchar() != '\n')
        			continue;
				fun_d(list);
				break;
			case 'e':
				while(getchar() != '\n')
        			continue;
				fun_e(list);
				break;
			case 'f':
				printf("Done...\n");
				return 0;
		}
		
        menu();
	}
	
	
} 
void menu(void)
{
	printf("To choose a function, enter its letter laber:\n");
	printf("a) Show number of empty seats\n");
	printf("b) Show list of empty seats\n");
	printf("c) Show alphabetical list of seats\n");
	printf("d) Assign a customer to a seat assignment\n");
	printf("e) Delete a seat assignment\n");
	printf("f) Quit\n");
}
void fun_a(struct info *pt)
{
	int i;
	
	printf("The number of empty seats :\n");
	for(i=0;i<LIST;i++)
	{
		if(!pt[i].assign)
			printf("%4d",pt[i].number);
	}
	printf("\n");
	while(getchar() != '\n')
        continue;
}
void fun_b(struct info *pt)
{
	int i;
	printf("The list of empty seats :\n");
	for(i=0;i<LIST;i++)
	{
		if(!pt[i].assign)
			printf("%d:No assignment.\n",pt[i].number);
	}
	while(getchar() != '\n')
        continue;
}
void fun_c(struct info *pt)
{
	int i,j;
	struct info tem;
	struct info ter[LIST];
	
	for(i=0;i<LIST;i++)
		ter[i]=pt[i];
	for(i=0;i<LIST;i++)
		for(j=i+1;j<LIST;j++)
			if(strcmp(ter[i].first,ter[j].first)>0)
			{
				tem=ter[i];
				ter[i]=ter[j];
				ter[j]=tem;
			}
	for(i=0;i<LIST;i++)
		printf("%d:%s %s %s\n",ter[i].number,(ter[i].assign==0)? "No assignment":"Assigned by:",
		ter[i].first,ter[i].last);
	while(getchar() != '\n')
        continue;
}
int fun_d(struct info *pt)
{
	int i;
	
//座位全部被预订 
	if(pt[0].assign&&pt[1].assign&&pt[2].assign&&pt[3].assign&&pt[4].assign&&pt[5].assign&&
	pt[6].assign&&pt[7].assign&&pt[8].assign&&pt[9].assign&&pt[10].assign&&pt[11].assign)
	{
		printf("All seats has been assigned.\n");
		return 0;
	}
	printf("Choose the number of empty seats:\n");
//错误输入 
	if(scanf("%d",&i)==0||i<0||i>12)
	{
		printf("Wrong input.\n");
		while(getchar() != '\n')
        	continue;
		return 0;
	}
	while(getchar()!='\n')
		continue;
//该座位已被预订 
	while(pt[i-1].assign)
	{
		printf("This seat has been assigned, choose another one please:\n");
		scanf("%d",&i);
		while(getchar()!='\n')
			continue;
	}
//成功预订座位 
	printf("Enter first name of the customer:");
	scanf("%s",&pt[i-1].first);
	getchar();
	printf("Enter last name of the customer:");
	scanf("%s",&pt[i-1].last);
	pt[i-1].assign=1;
	getchar();
	
	return 0;
}
int fun_e(struct info *pt)
{
	int i;
	
	printf("Choose a seat assignment to delete:");
//错误输入	
	if(scanf("%d",&i)==0||i<0||i>12)
	{
		printf("Wrong input.\n");
		while(getchar() != '\n')
        	continue;
		return 0;
	}
	while(getchar()!='\n')
		continue;
//该座位没被预订 
	while(!pt[i-1].assign)
	{
		printf("This seat has not been assigned, choose another one please:\n");
		scanf("%d",&i);
		while(getchar()!='\n')
			continue;
	}
//删除预订信息
	pt[i-1].assign=0;
	strcpy(pt[i-1].first,"");
	strcpy(pt[i-1].last,"");
	printf("Delete completed.\n");
	
	return 0;	 
} 
