#include <stdio.h>
#include <stdlib.h>
int main()
{
  char c[1000];
  FILE *fptr;
  
  if ((fptr = fopen("text.txt", "r")) == NULL)
  {
    printf("error with file opening");
    exit(1);
  }
  fscanf(fptr, "%[^\n]", c);
  
  printf("from file: \n %s\n", c);
  fclose (fptr);
  return 0;
}
