#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    int group;
} s;
int main()
{
    printf("Enter the student info:\n");
    printf ("Name: "); scanf("%s", s.name);
    printf ("roll num: "); scanf("%d", &s.roll);
    printf ("Group num: "); scanf("%d", &s.group);

    printf("Printing the student info:\n");
    printf ("Name: "); puts(s.name);
    printf ("roll num: %d\n", s.roll);
    printf ("Group num: %d\n", s.group);


    return 0;
}