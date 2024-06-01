#include <stdio.h>
int main ()
{
    int i,n;
    float arr[100];
    printf("Enter array length (1-100): ");
    scanf("%d",&n);
    for (i=0; i<n;++i)
    {
        printf("\nEnter array element: ");
        scanf("%f", &arr[i]);
        if (arr[0]<arr[i])
            arr[0]=arr[i];
    }
    printf("Max is %.2f\n", arr[0]);
    return 0;
}