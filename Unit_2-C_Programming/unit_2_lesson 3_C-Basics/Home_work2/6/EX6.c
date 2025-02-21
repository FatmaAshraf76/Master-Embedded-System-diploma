#include <stdio.h>
int main(void)
{
	int sum=0 ,x;
	printf("Enter an integer:");
	fflush(stdout);
	scanf("%d",&x);

		for(int i=0;i<=x;i++)
		{
			sum+=i;
		}
		printf("Sum = %d",sum);

	return 0;
}


