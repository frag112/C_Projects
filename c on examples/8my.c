#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 10

char *p[MAX];
int insertPos;

void addQ()
{
    if(insertPos == MAX)
    {
        printf("Queue is full\n");
        return;
    }
    // pass string to array
    p[insertPos] = "s";
    insertPos++;
}
void delQ()
{
    // remove first element of an array, shift all elements of it up
}
void new_el()
{
    printf("n entered\n");
}
void display()
{
    printf("d entered\n");
}
void remove_el()
{
    printf("r entered\n");
}

int main ()
{
    char s[1000];
    char c;
    register int j;
    for (j=0; j< MAX; ++j) 
    {
        p[j] = 0;
    }
    for (;;)
    {
        printf("N - enter, D - display, R - remove, Q - quit: ");
        //get input, assign 1st char to c and check it
        switch (c)
        {
            case 'N': new_el(); break;
            case 'D': display(); break;
            case 'R': remove_el(); break;
            case 'Q': return 0;
        }

    }
}