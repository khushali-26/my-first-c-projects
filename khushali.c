#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
	//unsigned int a=21;
	//printf("a= %u",a);
	float a,b,c;
	printf("enter three sides of triangle: ");
	scanf("%f%f%f", &a, &b, &c);
	printf("\nthree sides of triangle: %.2f%.2f%.2f",a,b,c);
	float d=(a+b+c)/2;
	float e=d*(d-a)*(d-b)*(d-c);
	float f=sqrt(e);
	printf("\narea of triangle: %.2f",f);
getch();
}