#include <stdio.h>

int main() {
    int nb;
    float nbdecimal=9.98;
    char caractere; // de 0 à 255
    nb = 42; //Affectation de 42 à la variable nb
    caractere = 'm';
    printf("Oui\n");
    printf("Un entier => %d\n", nb);
    printf("Un decimal => %f\n", nbdecimal);
    printf("Un caractere => %c\n", caractere);
    printf("Le caractere %c a la valeur %d\n", caractere, nb);
    return 0;
}