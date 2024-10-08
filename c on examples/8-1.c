#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 10

char *p[MAX];
int in_pos;
int out_pos;

void queueIn (char *q)
{
    if (in_pos == MAX)
    {
        printf("Очередь переполнена\n");
        return;
    }
    p[in_pos] = q; 
    in_pos++;
}

char *queueOut ()
{
    if (in_pos == out_pos)
    {
        printf("Очередь пуста\n");
        return '\0';
    }
    out_pos++;
    return p[out_pos-1];
}

void display ()
{
    register int j;
    for(j=out_pos; j < in_pos; j++)
        printf("%d. %s\n", j+1, p[j]);
}

void remove_el()
{
    char *p;
    if (!(p=queueOut())) return;
    printf("%s\n", p);
}

void new_el()
{
    char s[100], *p;
    do {
    printf("Введите строку для вставки в очередь: \n");
    gets(s);
    if(*s==0) return;
    p = (char *)malloc(strlen(s)+1);
    if(!p)
    {
        printf("Нет памяти!\n");
        return;
    }   
    strcpy(p, s);
    if(*s) queueIn(p);
    } while (*s);

}

int main()
{
    char s[80];
    register int j;
    for (j=0; j< MAX; ++j) p[j] = 0;
    for (;;)
    {
        printf("N - ввести, D - вывести, R - удалить, Q - выход: ");
        gets(s);
        *s = toupper(*s);
        switch (*s)
        {
            case 'N': new_el(); break;
            case 'D': display(); break;
            case 'R': remove_el(); break;
            case 'Q': return 0;
        }
    }
}