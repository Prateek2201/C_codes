/*WAP in C to display the following pattern

12345
12345
12345
12345
12345
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j;
	clrscr();
	for(i=0;i<5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%d \t",j);
		}
		printf("\n");
	}
	getch();
}