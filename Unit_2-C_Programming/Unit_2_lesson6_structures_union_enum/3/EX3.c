#include <stdio.h>
struct complex
{
	float real;
	float imaginary;
};
void sum(struct complex n1,struct complex n2)
{
	 struct complex sum;
	 sum.real=n1.real+n2.real;
	 sum.imaginary=n1.imaginary+n2.imaginary;
	 if(sum.imaginary>0)
	 {
		 printf("sum = %f+%fi",sum.real,sum.imaginary);
	 }
	 else
	 {
		 printf("sum = %f%fi",sum.real,sum.imaginary);
	 }
}
int main(void)
{
	struct complex n1,n2;
	printf("for 1st complex number:\n");
	printf("Enter real and imaginary respectively: ");
	fflush(stdout);
	scanf("%f",&n1.real);
	fflush(stdout);
	scanf("%f",&n1.imaginary);
	fflush(stdout);

	printf("for 2st complex number:\n");
	printf("Enter real and imaginary respectively: ");
	fflush(stdout);
	scanf("%f",&n2.real);
	fflush(stdout);
	scanf("%f",&n2.imaginary);

	sum(n1,n2);
	return 0;
}
