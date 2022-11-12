#include <stdio.h>
int main() {
    int a = 10;
    int b = 11;
    int i = 0;
    int c = 10;
    int d;
    
    //while (i <= 10) {
    //    printf("i vaut %d\n", i);
    //    i++;
    //}
    //printf("\nBoucle terminée\n");
    //do {
    //    printf("\nc vaut %d\n", c);
    //    c++;
    //} while (c <= 10);

    for (; i<10; i+= 2 ) {
        printf("i vaut %d\n", i);
    }
        

    printf("\nBoucle terminée\n");
    return 0;
}