//WAP in C to perform all Arithmetic operation
#include<stdio.h>
#include<conio.h>

void main()
{
	int num1,num2;
	clrscr();
	printf("Enter any two numbers : ");
	scanf("%d %d",&num1,&num2);
	printf("\nAddition of %d and %d is = %d",num1,num2,num1+num2);
	printf("\nSubtraction of %d and %d is = %d",num1,num2,num1-num2);
	printf("\nMultiplication of %d and %d is = %d",num1,num2,num1*num2);
	printf("\nDivision of %d and %d is = %d",num1,num2,num1/num2);
	printf("\nModulus of %d and %d is = %d",num1,num2,num1%num2);
	getch();
}