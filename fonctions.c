#include <stdio.h>

/*
type_de_retour nom(parametre1, parametre2){
    Corps de la fonction
    return valeur_de_retour
}
*/

void afficherBonjour(){
    printf("Bonjour!\n");
}

int carre(int n){
    return n*n;
}

int maximum(int b, int c){
    int maxi;
    if (b>c){
        printf("%d est superieur à %d\n", b, c);
        maxi=b;
    } else {
        printf("%d est superieur à %d\n", c, b);
        maxi=c;
    }
    return maxi;
}

int main() {
    afficherBonjour();
    afficherBonjour();
    afficherBonjour();
    int a;
    printf("Quel est la valeur dont vous voulez le carré ? ");
    scanf("%d", &a);
    int resultat = carre(a);
    printf("Le carre de %d est égal à %d\n", a, resultat);
    maximum(12, 10);
    return 0;
}