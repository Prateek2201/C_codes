//WAP to make a simple calculator using switch...case
#include<stdio.h>
#include<conio.h>

void main()
{
	int num1,num2,n;
	clrscr();
	printf("Enter any two numbers : ");
	scanf(" %d %d",&num1,&num2);
	printf("Enter '1' for Addition : ");
	printf("Enter '2' for Subtraction : ");
	printf("Enter '3' for Multiplication : ");
	printf("Enter '4' for Division : ");
	printf("Enter '5' for Reminder : ");
	scanf("%d",&n);
	switch(ch)
	{
		case 1:
			printf("%d + %d = %d",num1,num2,num1+num2);
			break;
		case 2:
			printf("%d + %d = %d",num1,num2,num1-num2);
			break;
		case 3:
			printf("%d * %d = %d",num1,num2,num1*num2);
			break;
		case 4:
			printf("%d / %d = %d",num1,num2,num1/num2);
			break;
		case 5:
			printf("%d %% %d = %d",num1,num2,num1%num2);
			break;
		default:
			printf("Please enter corrrect character.");
	}
	getch();
}