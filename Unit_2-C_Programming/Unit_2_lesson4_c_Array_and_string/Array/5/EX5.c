#include <stdio.h>

int main(void) {
    int n, i, x;

    printf("Enter number of elements: ");
    fflush(stdout);
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements:\n", n);
    fflush(stdout);
    for (i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to be serched: ");
    fflush(stdout);
    scanf("%d", &x);

    for (i=0; i<n; i++)
    {
       if(a[i]==x)
       {
    	   printf("number found at location:%d ",i+1);
    	   return 0;
       }
    }
    printf("number not found");
    return 0;
}
