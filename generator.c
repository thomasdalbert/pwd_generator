#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void write_pwd (unsigned long numberOfPasswords, unsigned long numberOfLetters)
{
    srand(time(NULL));
    char *chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
    FILE* pwd = fopen("passwords.txt", "a");
    unsigned int i = 0, j = 0;

    for (i = 0; i < numberOfPasswords; ++i)
    {
        for (j = 0; j < numberOfLetters; ++j)
        {
            fputc(chars[rand() % strlen(chars)], pwd);
        }
        fputc('\n', pwd);
    }
    fputc('\n', pwd);

    fclose(pwd);
}
