#include <stdio.h>
#include <math.h>

int checkPrimeNumber (int n);
int checkArmstrongNumber (int n);

int main ()
{
    int n, flag;

    printf ("enter positive whole number: ");
    scanf ("%d", &n);

    // check for simple number
    flag = checkPrimeNumber (n);
    if (flag == 1)
        printf ("%d - simple.\n", n);
    else
        printf ("%d - is not simple.\n", n);
    // check for armstrong
    flag = checkArmstrongNumber (n);
    if (flag == 1)
        printf ("%d - the Armstrong number.\n", n);
    else
        printf ("%d - is not Armstrong number.\n", n);

    return 0;
}

int checkPrimeNumber (int n)
{
    int i, flag = 1;

    for (i=2; i<=n/2; ++i)
    {
        // check for simple number
        if (n%i == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}

int checkArmstrongNumber (int number)
{
    int originalNum, remainder, result = 0, n = 0, flag;
    originalNum = number;
    while (originalNum != 0)
    {
        originalNum /= 10;
        ++n;
    }
    originalNum = number;

    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }
    // check for armstrong
    if (result == number)
        flag = 1;
    else
        flag = 0;
    return flag;
}