#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    int d;
    char ch = 'a';
    ch = ch+4;
    a = 5; // 5 = 2*2+1
    a = a + 4;
    b = 2;
    c = a / b;
    d = a % b;

    printf("%d/%d=%d * %d + %d\n", a, b, b, c, d);
    printf("a = %d\n", a); 
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("d = %d\n", d);
    printf("%c (%d)\n", ch, ch);
    return 0;
}