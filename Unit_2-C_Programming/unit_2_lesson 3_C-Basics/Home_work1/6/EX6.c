#include <stdio.h>
int main(void)
{
	float a,b,temp;
	printf("Enter value of a: ");
	fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b: ");
	fflush(stdout);
	scanf("%f",&b);
	temp=a;
	a=b;
	b=temp;
	printf("\nAfter swapping, value of a = %f",a);
	printf("\nAfter swapping, value of b = %f",b);
	return 0;
}
