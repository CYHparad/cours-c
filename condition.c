#include <stdio.h>
int main() {
    int a = 10;
    int b = 11;
    int c = 11;
    int res1;
    int res2;
    int res3;
    
    //res1 = a == b; //Faux
    //res2 = b == c; //Vrai
    //res3 = res1 && res2; // Faux && Vrai

    if (a == b) {
        printf("La condition est vraie\n");
    } else if(b ==c) {
        printf("%d et %d sont égaux\n", b, c);
    } else {
        printf("La condition est fausse\n");
    }

    switch (a) {
        case 0:
            printf("a vaut 0\n");
            break;
        case 10:
            printf("a vaut 10\n");
            break;
        default:
        printf("Aucune idée de la valeur\n");
            break;
    }    


    //printf("a = %d\n", a);
    //printf("b = %d\n", b);
    //printf("c = %d\n", c);
    //printf("res3 = %d\n", res3);

    return 0;
}