#include <stdio.h>
int main(void)
{
	float a[2][2];
	float b[2][2];
	float sum[2][2];
	int i,j;
	printf("Enter elements of 1st matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter a[%d][%d]:",i,j);
			fflush(stdout);
			scanf("%f",&a[i][j]);
		}
	}
	printf("Enter elements of 2st matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter b[%d][%d]:",i,j);
			fflush(stdout);
			scanf("%f",&b[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("the sum of two matrix is:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%f ",sum[i][j]);
		}
		printf("\n");
	}

	return 0;
}
