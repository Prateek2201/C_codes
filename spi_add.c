//WAP to add two numbers using function
#include<stdio.h>
#include<conio.h>
void sum();

void main()
{
	clrscr();
	sum();
	getch();
}
void sum()
{
	int n1,n2;
	printf("Enter any two numbers : ");
	scanf("%d %d",&n1,&n2);
	printf("Result = %d",n1+n2);
}