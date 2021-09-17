//WAP in C to display weeks days from 1 to 7 by using case statement
#include<stdio.h>
#include<conio.h>

void main()
{
	char day;
	clrscr();
	printf("Enter any character between 'a' to 'g' : ");
	scanf(" %c",&day);
	switch(day)
	{
		case 'a':
		{
			printf("Monday");
			break;
		}
		case 'b':
		{
			printf("Tuesday");
			break;
		}
		case 'c':
		{
			printf("Wednesday");
			break;
		}
		case 'd':
		{
			printf("Thursday");
			break;
		}
		case 'e':
		{
			printf("Friday");
			break;
		}
		case 'f':
		{
			printf("Saturday");
			break;
		}
		case 'g':
		{
			printf("Sunday");
			break;
		}
		default:
		{
			printf("You have entered invalid character.");
			break;	//Optional 
		}
	}
	getch();
}