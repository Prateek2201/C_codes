//WAP in C to swap two numbers without third variable.
#includ<stdio.h>
#includ<conio.h>

void main()
{
	int num1,num2;
	clrscr();
	printf("Enter any two numbers : \n");
	scanf("%2d %2d",&num1,&num2);
	printf("\nBefore swapping,\n num1= %d, num2= %d",num1,num2);
	num1=num1+num2;	//b=a+b;
	num2=num1-num2;	//a=b-a;
	num1=num1-num2;	//b=b-a;
	printf("\nAfter swapping,\n num1= %d,num2=%d",num1,num2);
	getch();
}