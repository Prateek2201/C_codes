//No Return Type and No Passing Parameter

#include<stdio.h>
#include<conio.h>
//global declaration
void message();

void main()
{
	clrscr();
	message();	//function calling
	getch();
}
//Definition of Function
void message()
{
	printf("Hello ! User, Welcome in Functional Programming ");
}