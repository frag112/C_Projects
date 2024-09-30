#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void leave()
{
    exit(0);
}

int main()
{
    char command[20];

    printf ("Hello user!\n");
    for (; ;)
    {
    printf("Enter command:");
    scanf("%s", command); // not safe, line size not specified
    //gets_s(command, 20); gives error when compile
    //fgets(command, 20, stdin); entered symbols do not match at all

    if(strcmp(command, "man") == 0 || strcmp(command, "?") == 0)
    {
        printf("MANUAL:\ncreate FILENAME - creates file with given name\nexit - to exit the program\nman or ? - to print available commands\n");
        continue;
    }
    if(strcmp(command, "create") == 0)
    {
        FILE *textFile;
        char filename[20];
        printf("Enter filename:");
        scanf("%s", filename);
        textFile = fopen(filename, "w");
        if (textFile == NULL)
        {
            printf("Error!\n");
            exit (1);
        }
        continue;
    }
    if(strcmp(command, "exit") == 0)
    {
        leave();
    }
    else
    {
        printf("Command not found! Use \"man\" or \"?\" to list available commands\n");
        continue;
    }
    }




// /////////////
    FILE *textFile, *codeProgram;
    char c;
    char sentence[1000];
    codeProgram = fopen (__FILE__, "r");
    



    printf ("enter sentence:\n");
    gets(sentence);
    fprintf(textFile, "%s\n", sentence);
    
    do {
        c = getc(codeProgram);
        if (ferror(codeProgram)){
            printf("error reading file!\n");
            break;
        }
        putc(c, textFile);
    }
    //while (c != EOF);
    while (!feof(codeProgram));
    fflush(textFile);
    fclose(textFile);
    if (remove("text.txt"))
    {
        printf("Cant remove file!\n");
    }else
    {
        printf ("file removed\n");
    }
    
    fclose(codeProgram);
}