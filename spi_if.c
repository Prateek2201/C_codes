//WAP in C to check number is equal to 7 or not.

#include<stdio.h>
#include<conio.h>

void main()
{
	int num;
	clrscr();
	printf("Enter any number : ");
	scanf("%d",&num);
	if(num==7)	//simle if
	{
		printf("%d is equal to 7");
	}
	getch();
}