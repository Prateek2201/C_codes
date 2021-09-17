//WAP in C to display Armstrong number between two intervals.
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	int min,max,i,temp1,temp2,rem,n=0,res=0;
	clrscr();
	printf("Enter two numbers(intervals) : ");
	scanf("%d \t %d",&min,&max);
	printf("The Armstrong numners between %d and %d are = ");
	for(i=min+1;i<max;++i)
	{
		temp1=i;
		temp2=i;
		//to calculate number of digits
		while(temp1!=0)
		{
			temp1/=10;
			++n;
		}
		//to sum the nth power of digits
		while(temp2!=0)
		{
			rem=temp2%10;
			res+=pow(rem,n);
			temp2/=10;
		}
		if(res==i)
		{
			printf("%d",i);
		}
		//resetting the values to check Armstrong number for next iteration
	}
	getch();
}