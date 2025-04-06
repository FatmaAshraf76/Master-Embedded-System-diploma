#include <stdio.h>
int main(void)
{
	int i,n;
	float sum,avg;
	printf("Enter the number of data:\n");
	fflush(stdout);
	scanf("%d",&n);
	float arr[n];
	for(i=0;i<n;i++)
	{
		printf("Enter arr[%d]:",i);
		fflush(stdout);
		scanf("%f",&arr[i]);
		sum+=arr[i];
	}
	printf("The average:\n");
	avg=sum/n;
	printf("%f",avg);
	return 0;
}
