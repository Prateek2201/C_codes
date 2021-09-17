//Return Type, but No Passing Parameter
#include<stdio.h>
#include<conio.h>
int sum();

void main()
{
	clrscr();
	int res = sum();
	printf("Sum = %d",res);
	getch();
}
int sum()
{
	int a,b,c;
	printf("Enter any two numbers : ");
	scanf("%d %d",&a,&b);
	c=a+b;
	return c;
}