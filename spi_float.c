//WAP in C to multiply two floating values and stop output on two decimal places.
#include<stdio.h>
#include<conio.h>

void main()
{
	float a,b,res;
	clrscr();
	printf("Enter any two floating values : ");
	scanf("%f \t %f",&a,&b);
	res=a*b;
	printf("Result = %.2f",res);
	getch();
}