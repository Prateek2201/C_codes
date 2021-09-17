//WAP in C to check whether number is positive, negative or zero
#include<stdio.h>
#include<conio.h>

void main()
{
	int num;
	clrscr();
	printf("Enter any Integer number : ");
	scanf("%2d",&num);
	if(num<0)
		printf("The given number is negative i.e., %d",num);
	else if(num>0)
		printf("The given number is positive i.e., %d",num);
	else
		printf("The given number i.e., %d is equal to zero.",num);
	getch();
}