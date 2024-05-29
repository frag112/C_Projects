#include <stdio.h>

int checkPrimeNumber(int n);
int main()
{
    int n, i, flag = 0;
    printf("enter whole positive number: ");
    scanf("%d", &n);

    for (i=2; i<=n/2;++i)
    {
        if(checkPrimeNumber(i) == 1)
        {
            if (checkPrimeNumber(n-i) == 1)
            {
                printf("%d = %d + %d\n", n, i, n-i);
                flag = 1;
            }
                
        }
    }
    if (flag == 0)
        printf("%d cant be presented as sum of two simple numbers", n);
    return 0;
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