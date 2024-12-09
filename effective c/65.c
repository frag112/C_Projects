#include <stdio.h>
#include <stdlib.h>
int main()
{
  char sentence[1000];
  FILE *fptr;
  
  fptr = fopen("text.txt", "w");
  if (fptr == NULL)
  {
    printf("Error!");
    exit(1);
  }
  
  printf ("Enter sentence:\n");
  fgets(sentence, 1000, stdin); //gets is not supported anymore
  fprintf(fptr, "%s\n", sentence);
  fclose(fptr);
  return 0;
}
