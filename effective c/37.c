#include <stdio.h>
long int fact (int n);
int main ()
{
    int n;
    printf("Enter positive number: ");
    scanf("%d", &n);
    printf("Factorial %d = %1d\n", n, fact(n));
    return 0;
}
long int fact (int n)
{
    if (n >= 1)
        return n*fact(n-1);
    else
        return 1;
}