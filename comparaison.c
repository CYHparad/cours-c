#include <stdio.h>

int main() {
    int a = 10;
    int b = 10;
    int c = 11;
    int res;

    res = (a == b || b ==c); // &&=Et, ||=Ou, 

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("res = %d\n", res);


    return 0;
}