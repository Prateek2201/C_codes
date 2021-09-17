//WAP in C to print number from 1 to 100 numbers by using while loop.
#include<stdio.h>
#include<conio.h>
#include<dos.h>

void main()
{
	int i;
	clrscr();
	i=1;
	while(i<=100)
	{
		printf("%d\t",i);
		delay(500);
		i++;
	}
	getch();
}