#include <stdio.h>
struct information
{
	char name[50];
	int roll;
	float marks;
};
int main(void)
{
	struct information students[10];
	printf("Enter information of students:\n");
	for (int i=0; i<10; i++)
	{
		students[i].roll=i+1;
		printf("\nFor roll number %d\n",students[i].roll);
		printf("Enter name: ");
		fflush(stdout);
	    scanf(" %s", students[i].name);
	    fflush(stdout);
	    printf("Enter marks: ");
	    fflush(stdout);
        scanf("%f", &students[i].marks);
        fflush(stdout);
	}
    printf("\nDisplaying information of students:\n");
    for (int i=0; i<10; i++)
    {
    	printf("\nInformation for roll number %d:\n", students[i].roll);
	    printf("Name: %s\n", students[i].name);
        printf("Marks: %f\n", students[i].marks);
    }
	return 0;
}
