#include <stdio.h>

int main() {
    int a;
    printf ("Entrez le nombre a: ");
    scanf ("%d", &a);
    if (a % 2 == 0)
    printf("%d est paire",a);
    else
    printf("%d est impaire",a);

    return 0;
}