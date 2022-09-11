#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int a, b, S;
    printf("Entrez la valeur de a et b: ");
    scanf("%d %d", &a, &b);
    S = a + b;
    printf("la somme de %d et %d est: %d\n", a, b, S);
    if (a == b)
    printf("Le tripple de la somme %d est: %d", S, 3 * S);
    return 0;
    }

    
