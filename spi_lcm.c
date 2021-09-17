//WAP in C to find the LCM of two numbers.
#include<stdio.h>
#include<conio.h>

void main()
{
	int num1,num2,rem,numer,denom,gcd,lcm;
	clrscr();
	printf("Enter any two numbers : ");
	scanf(" %d \t %d",&num1,&num2);
	if(num1>num2)
	{
		numer=num1;
		denom=num2;
	}
	else
	{
		numer=num2;
		denom=num1;
	}
	rem=numer%denom;
	for(;rem!=0;)
	{
		numer=denom;
		denom=rem;
		rem=numer%denom;
	}
	gcd=denom;
	lcm=(num1*num2)/gcd;
	printf("LCM of %d and %d = %d",num1,num2,lcm);
	getch();
}