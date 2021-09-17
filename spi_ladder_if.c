//WAP in C to enter any number and check that number range from 1 to 100 by using Ladder if(else if)
#include<stdio.h>
#include<conio.h>

void main()
{
	int num;
	clrscr();
	printf("Enter any number : ");
	scanf("%d",&num);
	//check multiple conditions ...
	if(num>=1&&num<=20)
	{
		printf("%d is between 1 and 20",num);
	}
	else if(num>20&&num<=40)
	{
		printf("%d is between 21 and 40",num);
	}
	else if(num>40&&num<=60)
	{
		printf("%d is between 41 and 60",num);
	}
	else if(num>60&&num<=80)
	{
		printf("%d is between 61 and 80",num);
	}
	else if(num>80&&num<=100)
	{
		printf("%d is between 81 and 100",num);
	}
	else
	{
		printf("Please enter number between 1 and 100.");
	}
	getch();
}