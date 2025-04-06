#include <stdio.h>
#include <math.h>
void prime(int first, int last)
{
    int n, i, is_prime;

    printf("Prime numbers between %d and %d are: ", first, last);

    for (n=first; n<=last; n++)
    {
        if(n<2)
        	continue;
        is_prime=1;
        for (i=2; i<=sqrt(n); i++)
        {
            if (n%i==0)
            {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) // إذا كان العدد أوليًا، نطبعه
            printf("%d ", n);
    }
}
int main(void)
{
	int x,y;
	printf("Enter two numbers (intervals): ");
	fflush(stdout);
	scanf("%d %d",&x,&y);
	prime(x,y);
}
