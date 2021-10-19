#include<stdio.h>
int main()
{
	float a,b,area_1,h;
	printf("Enter the base of trapezium");
	scanf("%f%f",&a,&b);
	printf("Enter the height of trapezium");
	scanf("%f",&h);
	area_1=0.5*(a+b)*h;
	printf("Area of trapezium-%f",area_1);
	return 0;
}
