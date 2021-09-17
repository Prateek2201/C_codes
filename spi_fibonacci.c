//WAP in C to display Fibonacci sequence upto n terms where value of n is entered by user.
#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i,t1=0,t2=1,nxterm;
	clrscr();
	printf("Enter number of terms of Fibonacci sequence : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",t1);
		nxterm=t1+t2;
		t1=t2;
		t2=nxterm;
	}
	getch();
}