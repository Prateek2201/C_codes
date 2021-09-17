//WAP in C to print the table of any number as the following format:
/*
5*1=5 
5*2=10
.
.
.
5*10=50
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int num,i,tab=0;
	clrscr();
	printf("Enter any number : ");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
		tab=num*i;
		printf("\n%d * %d = %d",num,i,tab);
	}
	getch();
}
