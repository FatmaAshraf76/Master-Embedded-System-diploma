#include <stdio.h>
struct information
{
	int feet;
	float inch;
};
void sum(struct information s1,struct information s2)
{
	 struct information sum;
	 sum.feet=s1.feet+s2.feet;
	 sum.inch=s1.inch+s2.inch;
	 while (sum.inch>=12)
	 {
		 sum.feet++;
		 sum.inch-=12;
	 }
	 printf("sum of distances= %d'-%f\"",sum.feet,sum.inch);
}
int main(void)
{
	struct information s1,s2;
	printf("Enter information for 1st distance:\n");
	printf("Enter feet: ");
	fflush(stdout);
	scanf("%d",&s1.feet);
	fflush(stdout);

	printf("Enter inch: ");
	fflush(stdout);
	scanf("%f",&s1.inch);
	fflush(stdout);

	printf("Enter information for 2st distance:\n");
	printf("Enter feet: ");
	fflush(stdout);
	scanf("%d",&s2.feet);
	fflush(stdout);

	printf("Enter inch: ");
	fflush(stdout);
	scanf("%f",&s2.inch);
	fflush(stdout);
	sum(s1,s2);
	return 0;
}
