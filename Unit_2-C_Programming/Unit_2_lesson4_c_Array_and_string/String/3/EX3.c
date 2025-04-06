#include <stdio.h>
#include <string.h>

int main(void) {
    char str[100];
    char rev[100];
    int i, len = 0;

    printf("Enter a string: ");
    fflush(stdout);
    gets(str);
    printf("The original text: %s\n", str);
    len = strlen(str);
    for (i = 0; i < len; i++)
    {
        rev[len - i - 1] = str[i];
    }
    rev[len] = '\0';
    printf("The reversed text: %s\n", rev);

    return 0;
}
