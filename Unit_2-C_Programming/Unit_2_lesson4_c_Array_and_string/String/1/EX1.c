#include <stdio.h>

int main(void) {
    char str[100];
    char c;
    int freq = 0, i;

    printf("Enter a string: ");
    fflush(stdout);
    gets(str);
    fflush(stdout);
    printf("Enter a character: ");
    fflush(stdout);
    scanf(" %c", &c);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == c)
        {
            freq++;
        }
    }
    printf("Frequency of '%c': %d\n", c, freq);

    return 0;
}


