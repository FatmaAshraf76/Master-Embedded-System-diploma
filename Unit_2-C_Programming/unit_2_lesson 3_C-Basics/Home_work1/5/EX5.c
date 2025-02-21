#include <stdio.h>
int main(void)
{
	char c;
	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c",&c);
	printf("\nASCII value of %c = %d",c,c);
	return 0;
}

