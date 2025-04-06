#include <stdio.h>

#define AREA_CIRCLE(r) (3.14159*r*r)

int main() {
    float radius,area;

    printf("Enter the radius: ");
    fflush(stdout);
    scanf("%f", &radius);
    fflush(stdout);
    area = AREA_CIRCLE(radius);
    printf("Area=%f\n", area);
    return 0;
}
