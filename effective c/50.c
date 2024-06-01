#include <stdio.h>
int main()
{
    int data[5], i;
    printf("Enter 5 elements: ");
    for (i=0; i<5;++i)
    {
        scanf("%d", data +i);
    }
    printf("array contents is:\n");
    for (i=0; i<5;++i)
    {
        printf("%d ", *(data +i));
    }
    return 0;
}