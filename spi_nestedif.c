//WAP in C to find max number between three number by using nested if Statement
#include<stdio.h>
#include<conio.h>

void main()
{
	int n1,n2,n3;
	clrscr();
	printf("Enter any three numbers : ");
	scanf(" %d %d %d",&n1,&n2,&n3);
	//check max number
	if(n1>n2)	//condition1
	{
		if(n1>n3)	//condition2
		{
			printf("%d is max number ",n1);
		}
		else
		{
			printf("%d is max number ",n3);
		}
	}
	else
	{
		if(n2>n3)
		{
			printf("%d is max number ",n2);
		}
		else
		{
			printf("%d is max number ",n3);
		}
	}
	getch();
}