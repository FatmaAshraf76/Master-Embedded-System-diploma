#include <stdio.h>
#include <string.h>

void reverse(char str[], int len)
{
    int i;
    for (i=len-1; i>=0; i--)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main(void) {
    char str[100];
    int len;

    printf("Enter a sequence: ");
    fflush(stdout);
    gets(str);
    len = strlen(str);
    reverse(str, len);

    return 0;
}
