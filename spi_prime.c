//WAP in C to find the whether the given number is Prime or not.
#include<stdio.h>
#include<conio.h>

void main()
{
	int n,m,i,flag=0;
	clrscr();
	printf("Enter any number : ");
	scanf("%d",&n);
	m = n/2;
	for(i=2;i<=m;i++)
	{
		if(n%i==0)
		{
			printf("%d is not a Prime Number.",n);
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("%d is a Prime Number.");
	}
	getch();
}