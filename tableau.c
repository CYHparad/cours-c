#include <stdio.h>

int main() {
    int i;
    int taille;
    printf("Quel est la taille du tableau ?");
    scanf("%d", &taille);
    printf("Oui %d\n", taille);
    int tab[taille];
    
    //tab[0]=1;
    //tab[1]=2;
    //tab[2]=3;
    
    for (i=0; i<taille; i++)
        tab[i] = i + 1;

    for (i = 0; i<taille; i++) {
        printf("La case tab[%d] vaut %d\n", i, tab[i]);
    }
    return 0;
}