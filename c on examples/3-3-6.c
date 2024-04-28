#include <wchar.h>
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    wchar_t buf[BUFSIZ];
    wchar_t *pch;
    size_t count;

    setlocale(LC_ALL, "");

    fputws(L"Введите свое имя: ", stdout);
    fflush(stdout);
    
    fgetws(buf, BUFSIZ, stdin);

    fputws(L"Ваше имя (по буквам):\n", stdout);

    if((pch = wcschr(buf, L'\n')) != NULL)
        *pch = L'\0';

    for(pch = buf, count =0; *pch !=L'\0'; ++pch, ++count)
        putwchar(*pch);

    putwchar(L'\n');
    wprintf(L"Введено букв (без символа перевода строки): %zd\n", count);
    exit(0);
}
// как видите, код работает нормально
// но не на моей винде 