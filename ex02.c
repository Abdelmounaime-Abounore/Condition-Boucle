#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char caractere;
    printf("Entrez un caratere: ");
    scanf("%c", &caractere);
    switch (caractere)
    {
    case 'a': case 'i': case 'u': case 'y': case 'e': case 'o':
        printf("%c est une voyelle", caractere);
        break;
    
    default:
        printf ("%c n'est pas une voyelle",caractere);
        break;
    }

    return 0;
}