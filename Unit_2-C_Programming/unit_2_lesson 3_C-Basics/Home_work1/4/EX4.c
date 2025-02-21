#include <stdio.h>
int main(void)
{
	float x,y;
	printf("Enter two numbers: ");
	fflush(stdout);
	scanf("%f %f",&x,&y);
	printf("\nProduct: %f",x*y);
	return 0;
}
