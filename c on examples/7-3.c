#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// linux
#include <sys/stat.h>
#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>
// windows
/*#include <dir.h>
int mkdir (const char *path);*/

int main (int argc, char *argv[])
{
    if (2 !=argc)
    {
        printf ("\nУкажите имя каталога в качесве первого параметра \n");
        return 1;
    }
    DIR *dp = NULL;
    struct dirent *dptr = NULL;
    char buff[128];
    memset(buff, 0, sizeof(buff));

    strcpy (buff, argv[1]);
    if (NULL == (dp = opendir(argv[1])))
    {
        printf("\nНе могу открыть каталог [%s]\n", argv[1]);
        exit (1);
    }
    else
    {
        if(buff[strlen(buff)-1]=='/')
        {
            strncpy(buff + strlen(buff), "NewDir/",7);
        }
        else
        {
            strncpy(buff + strlen(buff), "/NewDir/",8);
        }
        printf("\nСоздаем новый каталог[%s]\n", buff);
        mkdir(buff, S_IRWXU|S_IRWXG|S_IRWXO);
        printf("\nСодержимое каталога [%s]\n", argv[1]);
        while(NULL != (dptr = readdir(dp)))
        {
            printf("[%s]", dptr->d_name);
        }
        closedir(dp);
        rmdir(buff);
        printf("\n");
    }
    return 0;
}