#include <stdio.h>

int main(void) {
    int n, i, x, y;

    printf("Enter number of elements: ");
    fflush(stdout);
    scanf("%d", &n);

    int a[n], b[n + 1];

    printf("Enter %d elements:\n", n);
    fflush(stdout);
    for (i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to be inserted: ");
    fflush(stdout);
    scanf("%d", &x);

    printf("Enter the location : ");
    fflush(stdout);
    scanf("%d", &y);

    if (y<1 || y>n + 1)
    {
        printf("Invalid position!\n");
        return 1;
    }
    for (i=0; i<y-1; i++)
    {
        b[i] = a[i];
    }
    b[y-1]=x;
    for (i=y; i<n+1; i++)
    {
        b[i] = a[i-1];
    }
    printf("Array after insertion: ");
    for (i=0; i<n+1; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}
