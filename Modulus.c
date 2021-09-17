//WAP in C to use of Arithematic Operator

#include<stdio.h>
#include<conio.h>
void main()
{
	int days,year,month,week;
	clrscr();
	printf("Enter days : ");
	scanf("%d",&days);
	year=days/365;
	days=days%365;
	month=days/30;
	days=days%30;
	week=days/7;
	days=days%7;
	printf("Year = %d\nMonth = %d\nWeek = %d\nDays = %d",year,month,week,days);
	getch();
}