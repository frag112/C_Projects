#include <stdio.h>
struct Distance
{
    int feet;
    float m;
} d1, d2, sumOfDistances;

int main ()
{
    printf("Fill first struct:\n");
    printf ("Feet num: "); scanf("%d", &d1.feet);
    printf ("meters num: "); scanf("%f", &d1.m);

    printf("Fill second struct:\n");
    printf ("Feet num: "); scanf("%d", &d2.feet);
    printf ("meters num: "); scanf("%f", &d2.m);

    sumOfDistances.feet = d1.feet + d2.feet;
    sumOfDistances.m = d1.m + d2.m;

    printf("\nResult = %d - %.1f", sumOfDistances.feet, sumOfDistances.m);

    return 0;
}