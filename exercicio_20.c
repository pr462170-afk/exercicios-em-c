#include <stdio.h>
int main(void) {
    float a, b;
    printf("Digite dois numeros: ");
    if (scanf("%f %f", &a, &b) != 2) return 1;
    if (a > b) printf("%.2f e maior que %.2f\n", a, b);
    else if (b > a) printf("%.2f e maior que %.2f\n", b, a);
    else printf("Os valores sao iguais.\n");
    return 0;
}
