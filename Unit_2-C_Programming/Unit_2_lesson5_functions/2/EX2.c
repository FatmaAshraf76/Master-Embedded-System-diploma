#include <stdio.h>
void factorial(int num)
{
    int i ,res=1;
    printf("factorial of %d is: ",num);
    for (i=num; i>0; i--)
    {
        res*=i;
    }
    printf("%d ",res);
}
int main(void)
{
	int num;
	printf("Enter a positive number: ");
	fflush(stdout);
	scanf("%d",&num);
	factorial(num);
}

