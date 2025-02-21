#include <stdio.h>
int main(void)
{
	int i;
	printf("Enter a integer:");
	fflush(stdout);
	scanf("%d",&i);
	printf("\nYou entered: %d",i);
	return 0;
}

