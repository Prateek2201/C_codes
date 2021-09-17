//WAP in C to find the factorial number of any number into the following format 5!=5*4*3*2*1=120
#include<stdio.h>
#include<conio.h>

void main()
{
	int num,i,res=1;
	clrscr();
	printf("Enter any number t find the factorial : ");
	scanf("%d",&num);
	printf("\n%d! = ",num);
	//calculate factorial result
	for(i=num;i>0;i--)
	{
		res=res*i;
		if(i!=1)
		{
			printf("%d * ",i);
		}
		else
		{
			printf("%d = ",i);
		}
	}
	printf("%d",res);
	getch();
}