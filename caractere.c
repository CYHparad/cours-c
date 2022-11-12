#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int x;
    char chaine[20] = "Hello";
    for (i=0; i<6; i++) {
        printf("%c\n", chaine[i]);
    }
    printf("%s\n", chaine);
    for (x=0; x<3; x++){
        chaine[x]='D';
    }
    chaine[3]='\0';
    printf("%s\n", chaine);
    return 0;
}