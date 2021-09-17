//WAP in C to find the reminder value of the following expression

#include<stdio.h>
#include<conio.h>
void main()
{
	int num,t,res;
	clrscr();
	printf("Enter Divident : ");
	scanf("%d",&num);
	printf("Enter Divisor : ");
	scanf("%d",&t);
	res=num%t;
	printf("%d %% %d = %d",num,t,res);
	getch();
}