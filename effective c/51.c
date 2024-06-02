#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i,num;
    float *data;
    printf("Enter number of elements: ");
    scanf("%d", &num);

    data=(float*) calloc(num, sizeof(float));
    if(data == NULL)
    {
        printf("memory error");
        exit(1);
    }
    for(i=0;i<num;++i)
    {
        printf("Enter element %d: ", i+1);
        scanf("%f", data+i);
    }
    for (i=1;i<num;++i)
    {
        if (*data<*(data+i))
            *data = *(data+i);
    }
    printf("Max is %.2f\n", *data);
    return 0;
}