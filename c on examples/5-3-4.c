#include <stdio.h>
#include <stdlib.h>
int main (int argc, char *argv[])
{
    if (argc!=2)
    {
        printf("you forgot to add a parameter");
        exit(1);
    }
    printf("%s\n", argv[1]);
    return 0;
}