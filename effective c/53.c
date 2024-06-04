#include <stdio.h>

int main()
{
    char line[150];
    int i, total, digits, spaces;
    total = digits = spaces = 0;

    printf("Enter the line: ");
    scanf("%[^\n]",line);
    for(i=0;line[i]!='\0';++i)
    {
        if(line[i]>='0' && line[i]<='9')
        {
            ++digits;
        }
        else if (line[i]==' ')
        {
            ++spaces;
        }
        ++total;
    }

    printf("Total symbols: %d\n", total);
    printf("Total digits: %d\n", digits);
    printf("Total spaces: %d\n", spaces);
    return 0;
}