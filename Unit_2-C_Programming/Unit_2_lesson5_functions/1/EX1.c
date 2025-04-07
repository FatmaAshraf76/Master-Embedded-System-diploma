#include <stdio.h>
#include <math.h>

void prime(int first, int last) {
    int n, i, is_prime;
    for (n = first; n <= last; n++) {
        if (n < 2) continue;
        is_prime = 1;
        for (i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime)
            printf("%d ", n);
    }
}
int main(void)
{
	int x,y;
	printf("Enter two numbers (intervals): ");
	fflush(stdout);
	scanf("%d %d",&x,&y);
	if (x==1)
	{
	    printf("1 ");
	    x=2;
	}
	prime(x,y);
    printf("\n");
    return 0;
}
