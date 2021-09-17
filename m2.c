//WAP in C to take character by using getch() and display that character also.

#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	printf("Enter any character : ");
	ch=getche();   //getch()	//getche	//getchar
	printf("\nEntered Character By User is : %c",ch);
	getch();
}