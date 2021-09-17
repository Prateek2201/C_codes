//WAP in C to find the volume of sphere and pyramid.
#include<stdio.h>
#include<conio.h>

void main()
{
	float pi=3.14,r,vols;
	float l,w,h,volp;
	clrscr();
	//Volume of Sphere
	printf("Enter the radius of sphere : ");
	scanf("%f",&r);
	vols=(4*pi*r*r*r)/3;
	printf("\nVolume of Sphere = %f",vols);
	//Volume of Pyramid
	printf("\nNow enter the base length, base width and height respectively of Pyramid : ");
	scanf("%f \t %f \t %f",&l,&w,&h);
	volp=(l*w*h)/3;
	printf("\nVolume of Pyramid = %f",volp);
	getch();
}