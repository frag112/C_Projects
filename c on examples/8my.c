#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 10

char *p[MAX];
int insertPos;

void addQ( char* str)
{
    if(insertPos == MAX)
    {
        printf("Queue is full\n");
        return;
    }
    // pass string to array
    p[insertPos] = str;
    insertPos++;
}
void delQ()
{
    // remove first element of an array, shift all elements of it up
    printf("r entered\n");
}
void new_el()
{
    char s[100];
    scanf("%s", s);
    printf("%s", s);
    addQ(s);
}
void display()
{
    for (register int i=0; i<insertPos; ++i)
    {
        printf ("%d = %s\n", i+1, p[i]);
    }
}
void remove_el()
{
    delQ();
}

int main ()
{
    //char s[1000];
    char c;
    register int j;
    for (j=0; j< MAX; ++j) 
    {
        p[j] = 0;
    }
    for (;;)
    {
        printf("\nN - enter, D - display, R - remove, Q - quit: ");
        int c = getchar();
        c = toupper(c);
        switch (c)
        {
            case 'N': new_el(); break;
            case 'D': display(); break;
            case 'R': remove_el(); break;
            case 'Q': return 0;
        } 
        while ((getchar()) != '\n'); // clear buffer before next loop. you can enter as long string as you want. program will read only 1st char
    }
}