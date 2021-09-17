//Return Type, but No Passing Parameter
#include<stdio.h>
#include<conio.h>
int sum(int,int);

void main()
{
	int a,b;
	clrscr();
	printf("Enter any two numbers : ");
	scanf("%d %d",&a,&b);
	printf("Sum = %d",sum(a,b));
	getch();
}
int sum(int a,int b)
{
	return (a+b);
}