//WAP in C to find all roots of a Quadratic Equation.
#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	float r1,r2,d;
	clrscr();
	printf("Enter a, b, c of Quadratc equation : ");
	scanf("%d %d %d",&a,&b,&c);
	d=sqrt("(b*b)-4*a*c");
	if(d==0)
	{
		printf("Both Roots are equal.");
		r1=-d/(2*a);
		printf("r1 is equal to r2 = %d",r1);
	}
	else
	{
		printf("Roots are real numbers.");
		r1=-(b+d)/(2*a);
		r2=-(b-d)/(2*a);
		printf("r1 = %d \t r2 = %d",r1,r2);
	}
	getch();
}
