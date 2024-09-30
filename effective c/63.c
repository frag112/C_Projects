#include <stdio.h>
#include <stdlib.h>

struct course
{
    int marks;
    char subject[30];
};

int main()
{
    struct course *ptr;
    int i, noOfRecords;
    printf("Number of records: ");
    scanf("%d", &noOfRecords);
    
    ptr = (struct course*) malloc (noOfRecords * sizeof(struct course));
    for (i=0; i<noOfRecords; ++i)
    {
        printf("Enter subject title and grade:\n");
        scanf("%s %d", &(ptr+i)->subject, &(ptr+i)->marks);
    }
    printf("Result:\n");
    for(i=0; i<noOfRecords; ++i) printf("%s\t%d\n", (ptr+i)->subject, (ptr+i)->marks);
    return 0;
}