#include <stdio.h>
int main()
{
    int n,i;
    float num[100];
    float sum = 0, average = 0;
    printf("Enter array length: ");
    scanf("%d", &n);
    while (n>100 || n <=0)
    {
        printf("\nLength must be from 1 to 100!\n");
        printf("Enter array length: ");
        scanf("%d", &n);        
    }
    for (i = 0; i < n; ++i)
    {
        printf("\nEnter number: ");
        scanf("%f", &num[i]);   
        sum +=num[i]; 
    }
    average = sum / n;
    printf("\nAverage is %.2f\n", average);
    return 0;
}