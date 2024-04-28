#include <stdio.h>
#include <string.h>
#define endofstring '\0'

int main ()
{
    char line[101];
    int i,j;
    scanf("enter the line: %s", &line);

    gets(line);
    for(i=0; line[i] !=endofstring; ++i)
    {
        while(!((line[i] >= '0' && line[i] <= '9') || line[i] == endofstring))
        {
            for(j=i; line[j]!= endofstring; ++j)
            {
                line[j] = line[j+1];
            }
            line[j] = endofstring;
        }
    }
    printf("%s", line);
    return 0;
}