#include <stdio.h>
#include <math.h>
int convertBinaryToDecimal (long long n);
long long convertDecimalToBinary(int n);

int main()
{
    long long n;
    printf("Enter binary number: ");
    scanf("%11d", &n);
    printf("%11d (binary) = %d (decimal)\n", n, convertBinaryToDecimal(n));

    printf("Enter decimal number: ");
    scanf("%d", &n);
    printf("%d (decimal) = %11d (binary)\n", n, convertDecimalToBinary(n));
    return 0;
}

int convertBinaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n/=10;
        decimalNumber +=remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}

long long convertDecimalToBinary (int n)
{
    long long binaryNumber = 0;
    int remainder, i=1, step=1;
    while(n!=0)
    {
        remainder=n%2;
        printf("step: %d: %d/2, remainder = %d, divider = %d\n", step++, n, remainder, n/2);
        n/=2;
        binaryNumber +=remainder*i;
        i*=10;
    }
    return binaryNumber;
}