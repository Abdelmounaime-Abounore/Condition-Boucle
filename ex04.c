#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int cas, annees;
    printf("Saisir le nombre d'annees: ");
    scanf("%d", &annees);
    menu:
    printf("Entrez un cas de menu entre 1 et 5: ");
    scanf("%d",&cas);
    switch (cas)
    {
    case 1:
        printf("%d annees contiennent a %d mois", annees, 12 * annees);
        break;
    case 2:
        printf("%d annees contiennent a %d jours", annees, 365 * annees);
        break;
    case 3:
        printf("%d annees contiennent a %d heures", annees, 8760 * annees);
        break;
    case 4:
        printf("%d annees contiennent a %d minutes", annees, 525600 * annees);
        break;
    case 5:
        printf("%d annees contiennent a %d secondes", annees, 31536000 * annees);
        break;        
    default:
        goto menu;
        break;
    }
    return 0;
    }
