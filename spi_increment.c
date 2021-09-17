//WAP in C to increment and dcrement operator

#include<stdio.h>
#include<conio.h>
void main()
{
	int x=5;
	clrscr();
	printf("Real value of x = %d",x);
	x++;	//increment;
	printf("The value of x = %d",x);
	x=x+1;	//simple plus operator
	printf("Second time increment in x = %d",x);
	x+=1;	//shorthand operator
	printf("Third time imcrement in x = %d",x);
	getch();
}