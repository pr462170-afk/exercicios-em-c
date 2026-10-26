#include <stdio.h>
int main(void) {
    float numerador, divisor;
    printf("Numerador e divisor: ");
    if (scanf("%f %f", &numerador, &divisor) != 2) return 1;
    if (divisor != 0.0f) printf("Quociente: %.2f\n", numerador/divisor);
    else printf("Erro: divisao por zero nao permitida.\n");
    return 0;
}
