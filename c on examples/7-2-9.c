#include <stdio.h>
#include <stdlib.h>

int main ()
{
    struct car_type {
        char model [80];
        int year;
    } car;
    FILE *fp;
    double a = 33.33;
    int b = 300;

    fp = fopen("test", "wb+");
    if (fp == NULL)
    {
        printf("Невозможно открыть файл\n");
        exit(1);
    }

    fwrite(&a, sizeof(double), 1, fp);
    fwrite(&b, sizeof(int), 1, fp);
    fwrite(&car, sizeof(struct car_type), 1, fp);

    fflush (fp);
    a = 11.11;
    b = 100;
    rewind(fp);
    fread(&a, sizeof(double), 1, fp);
    fread(&b, sizeof(int), 1, fp);
    printf("%f %d\n", a, b);

    fclose(fp);
    return 0;
}