#include<stdio.h>
int main()
{
	float a,b,c,s,area_1;
	printf("Enter first side");
	scanf("%f",&a);
	printf("Enter second side");
	scanf("%f",&b);
	printf("Enter third side");
	scanf("%f",&c);
	s=(a+b+c)/2;
	printf("Sum of the side-%f\n",s);
	area_1=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area of the square-%f",area_1);
	return 0;
}
