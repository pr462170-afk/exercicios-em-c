#include <stdio.h>
int main(void) {
    float a, b, c;
    printf("Digite os tres lados: ");
    if (scanf("%f %f %f", &a, &b, &c) != 3 || a <= 0 || b <= 0 || c <= 0) return 1;
    if (a < b+c && b < a+c && c < a+b) {
        if (a == b && b == c) printf("Triangulo equilatero.\n");
        else if (a == b || a == c || b == c) printf("Triangulo isosceles.\n");
        else printf("Triangulo escaleno.\n");
    } else printf("Os lados nao formam um triangulo.\n");
    return 0;
}
