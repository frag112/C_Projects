#include <stdio.h>
#include <string.h>
#define endofstring '\0'
char userinput[12]

void inputInteger (int *number) // check if input is correct and then convert to int
{
    do 
    {
        int i,j;
        printf ("\nenter integer: ");
        scanf("%s", userinput);
        gets(line);
        for(i=0; userinput[i] !=endofstring; ++i)
        {   
            while(!((userinput[i] >= '0' && userinput[i] <= '9') || userinput[i] == endofstring))
            {
                for(j=i; userinput[j]!= endofstring; ++j)
                {
                    userinput[j] = userinput[j+1];
                }
                userinput[j] = endofstring;
            }
        }
        printf("%s", userinput);

    }
    while (!(*number  > 0 && *number <= 100));
}

int main ()
{
    int r,c, a[100][100], b[100][100], sum[100][100], i, j;
    printf ("enter number of strings from 1 to 100.");
    inputInteger(&r);
    printf("\n%d",r);
    printf("enter number to columns: ");
    scanf("%d", &c);
}