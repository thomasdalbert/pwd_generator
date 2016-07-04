#include <stdio.h>

#include "menu.h"
#include "generator.h"

int main()
{
    unsigned long numberOfPasswords = 0, numberOfLetters = 0;

    homeMenu(&numberOfPasswords, &numberOfLetters);
    write_pwd(numberOfPasswords, numberOfLetters);
    printf("\n%ld random password", numberOfPasswords);

    if (numberOfPasswords > 1)
    {
        printf("s");
    }
    printf(" have been sucessfully written in file \"passwords.txt\".\n");

    getchar();
    return 0;
}

// POUR MODIFIER LES CARACTERES UTILISÉS LORS DE LA GÉNÉRATION DES MOTS DE PASSE :
/**
    1. Modifiez la chaine située dans "generator.c" ligne 9 à votre convenance.
    2. Compilez.
**/
