#include <stdio.h>

int main(void) {
    char str[100];
    int len = 0, i;

    printf("Enter a string: ");
    fflush(stdout);
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
    	len++;
    }
    printf("length of string: %d\n", len);

    return 0;
}
