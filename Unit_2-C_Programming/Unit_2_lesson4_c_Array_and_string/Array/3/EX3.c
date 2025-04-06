#include <stdio.h>
int main(void)
{
	int i,j,n,m;
	printf("Enter row and colums of array:\n");
	fflush(stdout);
	scanf("%d %d",&n,&m);
	float arr[n][m];
	float t[m][n];
	printf("Enter elements of array:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("Enter arr[%d][%d]:",i,j);
			fflush(stdout);
			scanf("%f ",&arr[i][j]);
		}
	}
	printf("The matrix is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%f",arr[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			t[i][j]=arr[j][i];
		}
	}
	printf("the transpose matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%f ",t[i][j]);
		}
		printf("\n");
	}
	return 0;
}
