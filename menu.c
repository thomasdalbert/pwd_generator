#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "menu.h"

void homeMenu(unsigned long *numberOfPasswords, unsigned long *numberOfLetters)
{
    while (!*numberOfPasswords)
    {
        system("cls");
        printf("Please enter the number of password(s) to generate : ");
        *numberOfPasswords = readLong();
    }
    while (!*numberOfLetters)
    {
        system("cls");
        printf("How many character(s) do you want for your password");
        if (*numberOfPasswords > 1)
        {
            printf("s");
        }
        printf(" ? ");
        *numberOfLetters = readLong();
    }
}

long readLong()
{
    char str[100] = {0};

    if (read(str, 100))
    {
        return strtol(str, NULL, 10);
    }
    else
    {
        return 0;
    }
}

int read(char *str, int length)
{
    if (fgets(str, length, stdin) != NULL && !strchr(str, ' '))
    {
        char str_end = 0;

        str_end = strchr(str, '\n');
        if (str_end)
        {
            str_end = '\0';
        }
        else
        {
            clearBuffer();
        }
        return 1;
    }
    return 0;
}

void clearBuffer()
{
    int c = 0;
    while (c != '\n' && c != EOF)
    {
        c = getchar();
    }
}
