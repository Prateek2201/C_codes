//WAP in C to find the max number between three number

#include<stdio.h>
#include<conio.h>
void main()
{
	int num1,num2,num3,res;
	clrscr();
	printf("Enter any three numbers : \t");
	scanf("%d %d %d",num1,num2,num3);
	res=(a>b&&a>c)?a:(b>a&&b>c)?b:c;
	printf("Max number = %d",res);
	getch();
}
