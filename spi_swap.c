 //WAP in C to swap three numbers without using forth variable.
 #include<stdio.h>
 #include<conio.h>
 
 void main()
 {
	int a,b,c;
	clrscr();
	printf("Enter any three numbers : ");
	scanf("%2d %2d %2d",&a,&b,&c);
	
	printf("\nBefore swapping, values are : ");
	printf("\na = %d",a);
	printf("\nb = %d",b);
	printf("\nc = %d",c);
	
	a=a+b+c;
	b=a-b-c;
	c=a-b-c;
	a=a-b-c;
	
	printf("\nAfter swapping, values are : ");
	printf("\na = %d",a);
	printf("\nb = %d",b);
	printf("\nc = %d",c);
	getch();
 }