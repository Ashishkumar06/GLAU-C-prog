#include<stdio.h>
int main()
{
	float r,area_sp;
	printf("Enter radius");
	scanf("%f",&r);
	area_sp=4/3*3.14*r*r*r;
	printf("Volume of the sphere-%f",area_sp);
	return 0;
}
