//WAP in C to make marksheet of student
#incude<stdio.h>
#incude<conio.h>

void main()
{
	int num;
	clrscr();
	printf("Enter your marks : ");
	scanf("%d",&num);
	if(num<=100&&num>=80)
		printf("Honors");
	else if(num<80&&num>=65)
		printf("First");
	else if(num<65&&num>=33)
		printf("Second");
	else if(num<33&&num>0)
		printf("Fail");
	else
		printf("Please enter number between 1 and 100");
	getch();
}