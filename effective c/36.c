#include <stdio.h>

int addNumbers (int n);

int main ()
{
    int num;
    printf("Enter positive whole number: ");
    scanf("%d", &num);
    printf("\nSum = %d\n", addNumbers(num));
    return 0;
}
int addNumbers (int n)
{
    if (n != 0)
        return n + addNumbers (n-1);
    else
        return n;
}