#include <stdio.h>
int main(void)
{
	float x;
	printf("Enter a number:");
	fflush(stdout);
	scanf("%f",&x);
	if(x==0)
	{
		printf("You entered zero");
	}
	else if(x>0)
	{
		printf("%f is positive",x);
	}
	else
	{
		printf("%f is negative",x);
	}
	return 0;
}
