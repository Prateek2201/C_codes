//WAP to find the size of Data types
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	printf("size of 'int' datatype : %2d \n",sizeof(int));
	printf("size of 'char' datatype : %2d \n",sizeof(char));
	printf("size of 'short int' datatype : %2d \n",sizeof(short int));
	printf("size of 'long int' datatype : %2d \n",sizeof(long int));
	printf("size of 'int*' datatype : %2d \n",sizeof(int*));
	printf("size of 'float' datatype : %2d \n",sizeof(float));
	printf("size of 'double' datatype : %2d \n",sizeof(double));
	getch();
}