#include<stdio.h>
#include<string.h>
#define SIZE 81
#define LIM 10
#define HALT " "
void ascii (char **,int num);	/*按ASCII码排序 */
void length(char **,int num);	/*按字符串长度排序 */
void length_string(char **,int num);	//按字符串第一个单词长度排序 
void menu(void);	//显示菜单 
void put(char **,int n);	//输出结果 
char *s_gets(char *st,int n);

int main(void)
{
	char input[LIM][SIZE];	//储存输入的数组 
	char *ptstr[SIZE];	//内含指针变量的数组 
	int ct=0;	//输入计数 
	int op;
	
	printf("INPUT up to %d lines, and I will sort them.\n",LIM);
	printf("To stop, press them Enter key at a line's start.\n");
	while(ct<LIM&&s_gets(input[ct],SIZE)!=NULL&&input[ct][0]!='\0')
	{
		ptstr[ct]=input[ct];
		ct++;
	}
	menu();
	printf("Enter your option:");
	while((scanf("%d",&op))==1&&op<5)
	{
		switch(op)
		{
			case '1':
				put(ptstr,ct);
				break;
			case '2':
				ascii(ptstr,ct);
				put(ptstr,ct);
				break;
			case '3':
				length(ptstr,ct);
				put(ptstr,ct);
				break;
			case '4':
				length_string(ptstr,ct);
				put(ptstr,ct);
				break;
		}
		getchar();
		printf("\n");
		menu();
		printf("Enter next option:");
	}
	printf("Done...");
	
	return 0;
}

void menu(void)
{
	printf("**********************************\n");
	printf("Enter your option please:\n");
	printf("1)primitive mode	2)ASCII order\n");
	printf("3)length order		4)word_length order\n");
	printf("5)quit\n");
	printf("**********************************\n");
}

void put(char *string[],int n)
{
	int k;	//输出计数
	 
	puts("\nHere's the sorted list:");
	for(k=0;k<n;k++)
		puts(string[k]);
		
}

void ascii (char *strings[],int num)
{
	char *temp;
	int top,seek;
	
	for(top=0;top<num;top++)
		for(seek=top+1;seek<num;seek++)
			if(strcmp(strings[top],strings[seek])>0)
			{
				temp=strings[top];
				strings[top]=strings[seek];
				strings[seek]=temp;
			}
}

void length(char *strings[],int num)
{
	char *temp;
	int top,seek;
	
	for(top=0;top<num;top++)
		for(seek=top+1;seek<num;seek++)
			if(strlen(strings[top])>strlen(strings[seek]))
			{
				temp=strings[top];
				strings[top]=strings[seek];
				strings[seek]=temp;
			}
	
}

void length_string(char *strings[],int num)
{
	
}

char *s_gets(char *st,int n)
{
	char *ret_val;
	int i=0;
	
	ret_val=fgets(st,n,stdin);
	if(ret_val)
	{
		while (st[i]!='\n'&&st[i]!='\0')
			i++;
		if(st[i]=='\n')
			st[i]='\0';
		else
			while(getchar()!='\n')
				continue;
	} 
	
	return ret_val;
}


