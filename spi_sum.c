//WAP in C to calculate sum of n natural numbers.
#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i,sum=0;
	clrscr();
	printf("Enter number of natural numbers you want to sum : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=i;
		if(i<n)
			printf("%d + ",i);
		else
			printf("%d = ",i);
	}
	printf("%d",sum);
	getch();
}