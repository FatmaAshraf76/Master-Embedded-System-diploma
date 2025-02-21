#include <stdio.h>
int main(void)
{
	char c;
	printf("Enter an alphabet:");
	fflush(stdout);
	scanf("%c",&c);
	switch(c)
	{
	case 'a':
	case 'A':
	case 'e':
	case 'E':
	case 'i':
	case 'I':
	case 'o':
	case 'O':
	case 'u':
	case 'U':
		printf("%c is vowel",c);
		break;
	default:
	    printf("%c ic consonant",c );
	}
	return 0;
}
