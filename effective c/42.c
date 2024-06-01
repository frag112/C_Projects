#include <stdio.h>
#include "helpers.h"

void ReverseSentence ();

int main ()
{
    printf("Enter the line: ");
    ReverseSentence();
    StartNewline();
    return 0;
}

void ReverseSentence ()
{
    char c;
    scanf("%c", &c);
    if (c != '\n')
    {
        ReverseSentence();
        printf("%c", c);
    }
}
