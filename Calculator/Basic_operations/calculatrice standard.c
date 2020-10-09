#include <stdio.h>
#include <stdlib.h>
int main() {
    //d�claration des variables
    char operateur;
    double premier, deuxieme;
    //demande des valeurs attribu�es aux variables
    printf("Entrer une operation (+, -, *, /): ");
    scanf_s("%c", &operateur);
    printf("\nEntrer le premier nombre: ");
    scanf_s("%lf", &premier);
    printf("\nEntrer le deuxieme nombre: ");
    scanf_s("%lf", &deuxieme);
    //on utilise switch case pour savoir quelle op�ration faire en fonction de l'op�rateur choisit dans la variable
    switch (operateur) {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", premier, deuxieme, premier + deuxieme);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf", premier, deuxieme, premier - deuxieme);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", premier, deuxieme, premier * deuxieme);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", premier, deuxieme, premier / deuxieme);
        break;
        // si l'op�rateur n'est pas correct
    default:
        printf("\nOperateur incorrect, seuls les operateurs suivants sont pris en compte : + - * /");
    }
    return (EXIT_SUCCESS);
}