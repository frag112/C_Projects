#include <stdio.h>

int checkPrimeNumber (int n);
void separator();

int main()
{
    int n1, n2, i, flag;
    printf ("Enter beginning and end of range: ");
    scanf("%d %d", &n1, &n2);
    printf("\nWriting down simple numbers in range: \n");
    separator();

    for(i=n1+1; i < n2; ++i)
    {
        flag = checkPrimeNumber(i);
        if (flag == 1)
            printf ("%d ", i);
    }
    separator();
    return 0;
}

void separator()
{
    printf("\n");
    for (int i=0; i<80; i++)
        printf("=");
    printf("\n");
}

int checkPrimeNumber (int n)
{
    int j, flag = 1;
    for (j=2; j<=n/2; ++j)
    {
        if (n%j == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}