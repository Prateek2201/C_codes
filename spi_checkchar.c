//WAP in C to check whether a character is an alphabet or not
#include<stdio.h>
#include<conio.h>

void main()
{
	char ch;
	clrscr();
	printf("Enter any char value : ");
	scanf("%c ",&ch);
	if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
	{
		printf("\nEntered Character '%c' is an alphabet.",ch);
	}
	else
	{
		printf("\nEntered Character '%c' is not an alphabet.",ch);
	}
}