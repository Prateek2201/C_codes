//WAP in C to print 1 to 100 numbers using do while loop.
#include<stdio.h>
#include<conio.h>
#include<dos.h>

void main()
{
	 int i;
	 clrscr();
	 i=1;	//initialization
	 do
	 {
		printf("%d\t",i);
		//delay(500);
		i++;	//updation
	 }
	 while(i<=100);	//condition
	 getch();
}