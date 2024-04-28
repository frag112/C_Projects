#include <stdio.h>
#include <math.h>

float arrayX[10];
int i;
void userInput(){
    printf("Enter 10 elements: ");
    for (i=0; i < 10; ++i)
    {
        scanf("%f", &arrayX[i]);
    }
}

float calculateSD(float data[])
{
float sum = 0.0, mean, standardDeviation = 0.0;

for (i=0; i<10; ++i)
{
    sum+=arrayX[i];
}
mean = sum/10;
for (i=0; i<10; ++i)
{
    standardDeviation += pow(arrayX[i] - mean, 2);
    return sqrt (standardDeviation/10);
}
}
int main ()
{
    userInput();
    printf ("\nsredne kvadratycheskoe otkloneneie = %.6f\n", calculateSD(arrayX));
    return 0;
}
